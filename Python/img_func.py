#Pillow Library
from PIL import Image

# img = Image.open("989.jpg")

#basic functions 

'''
print(img.size)
print(img.format)

img.show()
'''

#cropping an image
'''
area = (100,100,300,375)
cropped_img = img.crop(area)
cropped_img.show()
'''

#merging an two images

'''
img1 = Image.open('989.jpg')
img2 = Image.open('8.jpg')

area = (100,100,300,300)

img2.paste(img1,area)

img2.show()

'''

#Getting Individual Channels

'''
img = Image.open('989.jpg')

print(img.mode)

r,g,b = img.split()

new_img = Image.merge("RGB",(b,g,r))
new_img.show()
'''







