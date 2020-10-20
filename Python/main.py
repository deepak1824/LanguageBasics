#Dictionary

'''classmates = {'Tony':' -cool but smells', 
              'Raju':' -toh hagta hai',
              'deepak':' -Hero hai hero'}

print(classmates)
print(classmates['Raju'])

for k, v in classmates.items():
    print(k + v)
'''

# download Image from web

'''
import random
import urllib.request   # package to get data from web

def download_image(url):
    name = random.randrange(1, 1000)
    full_name = str(name) + ".jpg"
    urllib.request.urlretrieve(url, full_name)

download_image("https://smallrvlifestyle.com/wp-content/uploads/2018/07/The-5-Best-Scenic-Drives-in-California-For-Your-RV-Trip.jpg")

'''

#read and write files

'''
fw = open('sample.txt','w')
fw.write('Writing sth in my sample file\n')
fw.write('I like to code\n')
fw.close()

fr = open('sample.txt','r')
text = fr.read()
print(text)
fr.close()
'''

#downloading files from the web


'''
from urllib import request

goog_url = 'https://query1.finance.yahoo.com/v7/finance/download/GOOG?period1=1571510955&period2=1603133355&interval=1d&events=history&includeAdjustedClose=true'

def download_stock_data(csv_url):
    response = request.urlopen(csv_url)
    csv = response.read()
    csv_str = str(csv)
    lines = csv_str.split("\\n")
    dest_url = r'goog.csv'
    fx = open(dest_url,"w")
    for line in lines:
        fx.write(line + "\n")
    fx.close()

download_stock_data(goog_url)

'''
#classes and objects

'''
class Enemy:
    life = 3

    def attack(self):
        print('OUCH!!')
        self.life -= 1

    def checkLife(self):
        if self.life <= 0:
            print('I am DEAD!!')
        else:
            print(str(self.life)+ " life left!!")

e1 = Enemy()
e2 = Enemy()

e1.attack()
e2.attack()
e1.checkLife() 
e2.checkLife()
'''

# init function

'''
# class Tuna:

#     def __init__(self):
#         print('I can SWIMM!!')

#     def swim(self):
#         print('I am swimming')

# flipper = Tuna()
# flipper.swim()

# init Example


class Enemy:
    def __init__(self,x):
        self.energy = x
    
    def get_energy(self):
        print(self.energy)

deepak = Enemy(9)

keepad = Enemy(18)

deepak.get_energy()
keepad.get_energy()

'''

#class variable V/S instance variable

'''
class Girl:
    gender = 'female'  # class variable

    def __init__(self, name):
        self.name = name # instance variable

r = Girl('Rachel')
s = Girl('Stanky')

print(r.gender)
print(s.gender)

print(r.name)
print(s.name)

'''

#Inheritance

'''
class Parent:
    def print_last_name(self):
        print('Shivani')

class Child(Parent):
    def print_first_name(self):
        print('Deepak')

    def print_last_name(self):  # overriding the function
        print('GHGAHGAHGA')

n = Child()
n.print_first_name()
n.print_last_name()

'''

#Multiple Inheritance


'''
class Mario():
    def move(self):
        print("I am MOVING!!")


class Shroom():

    def eat_shroom(self):
        print("Now I am big!!")

class BigMario(Mario,Shroom):
    pass



game = BigMario()
game.move()
game.eat_shroom()


'''


#Threading

'''
import threading

class DeepakMessenger(threading.Thread):
    def run(self):
        for _ in range(10):
            print(threading.current_thread().getName())

x = DeepakMessenger(name='Send out messages')
y = DeepakMessenger(name='Receive Messages')

x.start()
y.start()

'''

#unpacking list and tuples
'''
date, item , price = ['Dec 23, 2015', 'Bread Gloves', 76.4]


def drop_f_l(grades):
    f, *m, l = grades
    avg = sum(m)/len(m)
    print(avg)

drop_f_l([54,65,98,56,21])

'''

#Zip function
'''
first = ['deepak', 'naina', 'tinka','kutru']
last = ['shivani','tyagi','trex','kutta']

names = zip (first, last)

for a, b in names:
    print(a, b)
'''


#Lambda Function - one time use small functions without having any name

'''
ans = lambda x: x*7
print(ans(5))
'''


#min, max and Sorting Dictionaries
'''
stock = {
    'GOOG': 520.84,
    'FB': 64.35,
    'YHOO': 39.45,
    'AMZN': 306.51,
    'AAPL': 99.34
}

print(min(zip(stock.values(),stock.keys())))
print(max(zip(stock.values(),stock.keys())))
print(sorted(zip(stock.values(),stock.keys())))
'''


#Struct
'''
from struct import *

packed_data = pack('iif', 6, 19, 4.73) #store as bytes data

print(packed_data)
print(calcsize('i'))
print(calcsize('i'))
print(calcsize('iif'))

#to get data back to normal

original_data = unpack('iif', packed_data)
print(original_data)

'''



#Map function

'''
income = [10,30,45]

def double_money(dollars):
    return dollars*2

new_income = list(map(double_money,income))

print(new_income)


'''

#bitwise operators
'''
# binary AND

a = 50  # 110010
b = 25  # 011001

c = a & b # 010000

print(c)

# Binary Right Shift

x = 240         # 11110000

y = x >> 2      # 00111100

print(y)

'''

# get largest and smallest

'''
import heapq

grades = [32,43,654.34,231,66,95,545]
print(heapq.nlargest(3,grades))

stocks = [
    {'ticker':'AAPL','price':201},
    {'ticker':'GOOG','price':800},
    {'ticker':'FB','price':54},
    {'ticker':'MSFT','price':313},
    {'ticker':'TUNA','price':68}
]

print(heapq.nsmallest(2,stocks, key = lamba stock:stock['price']))
'''

#Dictionary Calculations

'''
stocks = {
    'GOOG': 520.84,
    'FB': 64.35,
    'YHOO': 39.45,
    'AMZN': 306.51,
    'AAPL': 99.34
}

min_price = min(zip(stocks.values(),stocks.keys()))
print(min_price)

'''

#Finding most frequent items

'''
from collections import Counter

text = "I love this place because they offer more than just"\
       "Borsch soup. We had seats upon arrival. I guess it "\
        "depends on what time of the day you go. The best is "\
        "to call and make reservation to avoid disappointment. "\
        "It has an authentic Russian ambience which you see in "\
        "movies. The best way to get the most of of the restaurant"\
        " is to order the appetizers to share among friends."

words = text.split()
print(words)

count = Counter(words)

top_three = count.most_common(3)
print(top_three)

'''


#Dictionary Multiple Key Sort

'''
from operator import itemgetter

users = [
    {'fname':'Deepak','lname':'shivani'},
    {'fname':'A','lname':'K'},
    {'fname':'D','lname':'P'},
    {'fname':'S','lname':'N'},
    {'fname':'H','lname':'G'},
    {'fname':'L','lname':'Q'},
    {'fname':'J','lname':'K'},
    {'fname':'T','lname':'E'},
    {'fname':'I','lname':'H'},
    {'fname':'M','lname':'P'}
]

for x in sorted(users, key=itemgetter('fname')):
    print(x)


print('-------')


for x in sorted(users, key=itemgetter('fname','lname')):
    print(x)

'''

#Sorting Custom Objects
'''
from operator import attrgetter

class User:
    def __init__(self,x,y):
        self.name = x
        self.user_id = y
    
    def __repr__(self):
        return self.name + ":" + str(self.user_id)


users = [
    User('A',43),
    User('W',15),
    User('K',33),
    User('H',4),
    User('F',24),
    User('Y',38),
    User('D',9)
]


for user in users:
    print(user)


print('-----------')


for user in sorted(users,key=attrgetter('name')):
    print(user)


print('-----------')


for user in sorted(users,key=attrgetter('user_id')):
    print(user)


'''


