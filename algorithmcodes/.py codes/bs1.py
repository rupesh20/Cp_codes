""""{	
if x==2
	print "go"
else} 

 beautifulsoup ,
(lambda x:x>7)(8)
(lambda x,y:x**2+y**2)(3,5)
def add(*args):
	print args

def main():
	print "bye"

if __name__ == '__main__':
		main()
"""
#! usr/bin/env/ python
from pyechonest import config
config.ECHO_NEST_API_KEY="CFD8LTBTFOEH9E3IG"
from pyechonest import artist
import webbrowser

weezer_results = artist.search(name='lady gaga')
weezer = weezer_results[0]
weezer_blogs = weezer.blogs
print 'Blogs about weezer:', [blog.get('url') for blog in weezer_blogs]


from facepy import GraphAPI

ACC_TOK='CAACEdEose0cBAGnJGkTWsCWrugi4m4JLDFENesQJznaQyyqzB4zCjWViZAbwDRGimMZCmTHfqnZCAJPsFOxnrZAoQc2gTZCyIZCJIrxG1OBEWIAZBzc6LwXOJYoKuCZALFiZC0kOC5l8ZBEtuOYAnlq9cDZAqWcMLvWrNqnDnfjwnxZBGuakrOuZAHZAteN0cnpiiWT9gWTJv9T2ZBSCAZDZD'
gr=GraphAPI(ACC_TOK)
gr.post(path=me/feed,message='Forca Barca(finally updates by python :p')

"""
import web
from facepy import GraphAPI
from urlparse import parse_qs

url = ('/', 'index')#url of fb 

app_id = "YOUR_APP_ID"
app_secret = "APP_SECRET"
post_login_url = "http://0.0.0.0:8080/"

user_data = web.input(code=None)

if not user_data.code:
    dialog_url = ( "http://www.facebook.com/dialog/oauth?" +
                               "client_id=" + app_id +
                               "&redirect_uri=" + post_login_url +
                               "&scope=publish_stream" )

    return "<script>top.location.href='" + dialog_url + "'</script>"
else:
    graph = GraphAPI()
    response = graph.get(
        path='oauth/access_token',
        client_id=app_id,
        client_secret=app_secret,
        redirect_uri=post_login_url,
        code=code
    )
    data = parse_qs(response)
    graph = GraphAPI(data['access_token'][0])
    graph.post(path = 'me/feed', message = 'Your message here')
"""
#def post ():

# post an item to the graph API

import urllib2

"""
urllib2.open() -> function to open any url
urllib2.parse() -> function to pass a query
urllib2.request()-> function to get http 

"""

for pg in iter_page(id)
	if msg=='happy birthday'
		post('STATUS/ID',message:'thank you')
