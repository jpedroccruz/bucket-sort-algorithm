import requests
from bs4 import BeautifulSoup

response = requests.get("https://www.dailymail.co.uk/news/article-2523930/Jesus-famous-person-history-according-software-algorithm.html")
soup = BeautifulSoup(response.content, 'html.parser')

div_content = soup.find('div', class_='artSplitter art-ins news')
famous_people = []

if div_content:
  for element in div_content.select("p b"):
    famous_people.append(element.text.strip())

famous_people.reverse()

with open("data.csv", "w") as file:
  for person in famous_people:
    file.write(f'{person},\n')