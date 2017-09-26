#! usr/bin/env/ python
from facepy import GraphAPI
import pprint
import fb

def main():
	key='EAACEdEose0cBAPUfYkZCZB69YRMEb1nu95mUuYlt4gHItzggZCGF8YFKICaZA2XFzWqCsx3iAOmI8bKEofQWM7yjvMZCYZC7IPOWbPMjYx3hCDEPlUjvj2LVA4BIOAQMI37oFMD5T6M1fhBWpryyF8ZCEWRq0ZCEAOS8QeddrC3L0VKdb0h9Coc6kWZBnZBEaABEsZD'
	g= GraphAPI(key)
	res = g.get('/me/picture',False)
	facebook=fb.graph.api(key)

	print (res)
	
if __name__ == '__main__':
	main()
	