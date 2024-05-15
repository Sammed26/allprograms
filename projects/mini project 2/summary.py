import requests
from bs4 import BeautifulSoup
import re
from sumy.parsers.plaintext import PlaintextParser
from sumy.nlp.tokenizers import Tokenizer
from sumy.summarizers.text_rank import TextRankSummarizer

def summarize_reviews(product):
    product = "-".join(product.split())

    ordinary_url_to_search_on_flipkart = "https://www.flipkart.com/search?q=" + product
    headers = {
    "User-Agent": "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/53.0.2785.92 Safari/537.36 FKUA/website/41/website/Desktop"
    }
    first_response = requests.post(ordinary_url_to_search_on_flipkart, headers=headers).text
    good_looking_first_response = BeautifulSoup(first_response, 'lxml')
    #print(good_looking_first_response.prettify())

    found_links = good_looking_first_response.find_all('a', attrs={'class': 'CGtC98'})
    product_url = "https://flipkart.com" + found_links[0].get('href')

    headers = {
    "User-Agent": "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/53.0.2785.92 Safari/537.36 FKUA/website/41/website/Desktop"
    }



    product_url_response = requests.get(product_url,  headers=headers).text

    good_looking_product_url_response = BeautifulSoup(product_url_response, 'lxml')
    #print(good_looking_product_url_response.prettify())

    found_div = good_looking_product_url_response.find('div', attrs={'class': '_23J90q'}).parent

    review_url = "https://flipkart.com" + found_div.get('href')
    #print(review_url)
    review_url_response = requests.get(review_url, headers=headers).text

    good_looking_review_url_response = BeautifulSoup(review_url_response, 'lxml')

    review_div = good_looking_review_url_response.find_all('div', {'class': 'ZmyHeo'})
    total_pages_div = good_looking_review_url_response.find_all('div', {'class': '_1G0WLw'})
    total_pages_span = total_pages_div[0].select('span')[0]
    total_pages = re.search(r'\b(\d+)\b$', total_pages_span.text)
    total_pages = int(total_pages.group(1))

    if total_pages > 50:
        total_pages = 50

    all_reviews = []

    for page in range(1, total_pages + 1):
        new_url = review_url + f"&page={page}"
        response = requests.get(new_url, headers=headers).text
        good_looking_response = BeautifulSoup(response, 'lxml')
        review_div = good_looking_response.find_all('div', {'class': 'ZmyHeo'})
        for review in review_div:
            all_reviews.append(review.select('div')[1].text)

    review_text = " ".join(all_reviews)

    parser = PlaintextParser.from_string(review_text, Tokenizer("english"))
    summarizer = TextRankSummarizer()
    summary = summarizer(parser.document, 1)
    text_summary = ""

    for sentence in summary:
        text_summary += str(sentence) 
    print(text_summary)
    return text_summary

# Example usage:
# product_name = input("Enter product name, e.g., 'samsung-galaxy-s24': ")
# summary = summarize_reviews(product_name)
# print("Summarized Review:")
# print(summary)
