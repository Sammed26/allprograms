#!/usr/bin/env python
# coding: utf-8

# In[1]:


def final_function(product):
    
    
    import pandas as pd
    import requests
    from bs4 import BeautifulSoup
    import numpy as np
    import re



   # product = input("enter product name ex samsung-galaxy-s24")

    ordinary_url_to_search_on_flipkart = "https://www.flipkart.com/search?q=" + product
    
    



    headers={'User-Agent':'Mozilla/5.0 (Windows NT 6.3; Win 64 ; x64) Apple WeKit /537.36(KHTML , like Gecko) Chrome/80.0.3987.162 Safari/537.36'}

    first_response = requests.post(ordinary_url_to_search_on_flipkart, headers=headers).text
    



    good_looking_first_response = BeautifulSoup(first_response, 'lxml')
    # print(good_looking_first_response.prettify());
   






    found_links = good_looking_first_response.find_all('a', attrs={'class': 'CGtC98'})

    product_url = "https://flipkart.com" + found_links[0].get('href');
    

    print(product_url)

    headers = ({"x-user-agent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/53.0.2785.92 Safari/537.36 FKUA/website/41/website/Desktop"})
    product_url_response = requests.get(product_url,  headers=headers).text
    
   


    good_looking_product_url_response = BeautifulSoup(product_url_response, 'lxml');

    # print(good_looking_product_url_response.prettify());
    

    found_divs = good_looking_product_url_response.find('div', attrs={'class': '_23J90q'}).parent

    # print(found_divs)
    review_url = "https://flipkart.com" + found_divs.get('href');
    
    

    headers = ({"x-user-agent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/53.0.2785.92 Safari/537.36 FKUA/website/41/website/Desktop"})
    review_url_response = requests.get(review_url, headers=headers).text
    
   

    good_looking_review_url_response = BeautifulSoup(review_url_response, 'lxml');

    # print(good_looking_review_url_response.prettify());
    
    review_div = good_looking_review_url_response.find_all('div', {'class': 'ZmyHeo'})
    print(review_div[0].select('div')[1].text)


    total_pages_div = good_looking_review_url_response.find_all('div', {'class': '_1G0WLw'});   #  class = cn++Ap 's last text content

    total_pages_span = total_pages_div[0].select('span')[0];

    # print(total_pages_span.text)

    total_pages = re.search(r'\b(\d+)\b$', total_pages_span.text)
    total_pages = int(total_pages.group(1))

    print(type(total_pages))

    if total_pages > 50:
        total_pages = 50;


    # print(total_pages[0])
    # print(total_pages_div)
    
    print(total_pages)
    
  

    page = 1;
    all_page_reviews = [];
    
    while page <= total_pages:
        new_url = review_url + f"&page={page}"
        page = page+1;
        
        headers = ({"x-user-agent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/53.0.2785.92 Safari/537.36 FKUA/website/41/website/Desktop"})
        response = requests.get(new_url, headers=headers).text
        
        good_looking_response = BeautifulSoup(response, 'lxml');
        
        review_div = good_looking_response.find_all('div', {'class': 'ZmyHeo'});
        for review in review_div:
            all_page_reviews.append(review.select('div')[1].text);  
 

    # initialize an empty string
    str1 = " "
 
    # return string
    review_text = str1.join(all_page_reviews)
     

    print(review_text)

    from sumy.parsers.plaintext import PlaintextParser
    from sumy.nlp.tokenizers import Tokenizer
    from sumy.summarizers.text_rank import TextRankSummarizer

    # Input your text for summarizing
    text = review_text

    # For Strings
    parser = PlaintextParser.from_string(text, Tokenizer("english"))

    # Summarize using TextRank
    summarizer = TextRankSummarizer()
    summary = summarizer(parser.document, 1)

    # Concatenate summarized sentences
    text_summary = ""

    for sentence in summary:
        text_summary += str(sentence) 

    # Print the summarized text


    return text_summary






# In[2]:


sum = final_function(product)

#print(sum)


# In[ ]:




