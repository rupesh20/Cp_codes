#! usr/bin/env/ python
from facepy import GraphAPI
import json
import fb

def main():
	key='CAACEdEose0cBAJlD3JdBUPgyqXwsCwJK7RYFhWOS7ORZCZBZB2jxcZAuZC346Ef15vy2XDdIZA377PZB9Mn0GWinyZAfmSWMT3Af8lXFaNMwYH92nFMkirJPCZBO3ZBlJwcH12n48kSuiVtGnySbdxoMSN0vrzBDjq8nC7nKZAciZAB18ZBIVzfeSl3AnZBTLLWXntbte5mjtvXMl9awZDZD'
	g= GraphAPI(key)
	#res will contain JSON object
	res= g.get('/me/feed')
	facebook=fb.graph.api(key)
	i=0
	while i<15:
		#x will contain element of json data one by one (which is the post id) 
		x=res["data"][i]['id']
		#post comment on each b'day id
		#943131799113684_982276118532585

		facebook.publish(cat="comments",id=x,message="Thanks")
		facebook.publish(cat="likes",id=x)    
		i+=1
if __name__ == '__main__':
	main()