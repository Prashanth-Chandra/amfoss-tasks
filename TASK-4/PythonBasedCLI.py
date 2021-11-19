import argparse
import urllib.request
import json
import sys

#Creating the parser
my_parser=argparse.ArgumentParser(description='Get the image from date and id')

#Adding the arguments
my_parser.add_argument('Date',
                       type=str,
                       help='query date')

my_parser.add_argument('id',
                       type=int,
                       help='query id')

#Executing the parse_args() method
args=my_parser.parse_args()

input_date=args.Date
input_id=args.id

#Create=ing the api
url="https://api.nasa.gov/mars-photos/api/v1/rovers/curiosity/photos?earth_date="+input_date+"&api_key=aqBv2zFqenJHg9UnmtaHwa7OOP693OC2yBcEBvDQ"


#Get the content and convert a list of some sort
contents=urllib.request.urlopen(url).read()
x=json.loads(contents.decode('utf-8'))
#Check if the photos list is empty
if not x["photos"]:
    print("Wrong date entered")
    sys.exit()

cont = 0

for photo in x["photos"]:
    if(photo["id"]==input_id):
        cont=1
        print(photo["img_src"])
        

if cont == 0:
    print("Wrong id entered")
