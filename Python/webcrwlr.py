#webcrawler

import requests
from bs4 import BeautifulSoup

def spider_1(max_pages):
    page = 2
    while page <= max_pages:
        url = 'https://classpert.com/it-computer-science?p=' + str(page)
        source_code = requests.get(url)
        plain_text = source_code.text
        soup = BeautifulSoup(plain_text, features='lxml')

        for link in soup.findAll('a', {'class': 'el:m-text-clipbox__text fw-b el:m-text-clipbox__text--2-lined'}):
            href = "https://classpert.com/" + link.get('href')
            title = link.string
            # print(href)
            # print(title)
            get_single_item(href)
        page += 1


def get_single_item(item_url):
    source_code = requests.get(item_url)
    plain_text = source_code.text
    soup = BeautifulSoup(plain_text, features='lxml')
    for item_name in soup.findAll('div', {'class': 'title section'}):
        print(item_name.string)
    for link in soup.findAll('a'):
        href = "https://classpert.com/" + link.get('href')
        print(href)


spider_1(2)

