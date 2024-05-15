from flask import Flask, render_template, request
from summary import summarize_reviews  # assuming final_function is in a file named final_function.py

app = Flask(__name__)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/summarize', methods=['POST'])
def summarize():
    if request.method == 'POST':
        product_name = request.form['product_name']
        summary = summarize_reviews(product_name)
        return render_template('index.html', summary=summary)

if __name__ == '__main__':
    app.run(debug=True)
