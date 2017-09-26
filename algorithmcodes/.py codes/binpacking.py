import numpy as np
import random as rd 
import matplotlib.pyplot as plt 
#first fit 
binList = [] #rectangles per bin information
DyList = [] # all bins remaining size
Rwidth = []
Rheight = []
BinHiegth = 11
BinWidth = 6

def addRect(data,list):
	binList.append([ ])
	L = len(binList)-1
	binList[L].append(data)

def listlen(list):
	x=len(list)
	if x is None:
		return 0
	return x 

def addBin(x,y):
	DyList.append([ ])
	n = len(DyList)-1
	DyList[n].append(x)
	DyList[n].append(y) 

def canPack(data):
	X=data[0]
	Y=data[1]
	index=0
	for z in DyList:
			
		if Y<=z[1]:
			return index
		elif Y>z[1] && X<=z[0]:
			return index
		else:
			return 0
		index+=1	
def  BFFpack(data, s):
	l1=binList[s]
	l2=DyList[s]
	
		if l1 is 0 or l2 is 0:
			print "error"

		else:
			l1.append(data)
			binList[s]=l1
			l2[0]=l2[0]-data[0]
			l2[1]=l1[1]-data[1]
			DyList[s]=l2			

def binFF(data):
	m=listlen(data)
	if m is 0:
		return None

	else:
		i=0
		while i<=m:
			d1 = data.pop()
			
			if len(binList) is 0:
				addRect(d1,binList)
				Rheight = (BinHiegth-d1[0])
				Rwidth = (BinWidth-d1[1])
				AddBin(Rheight,Rwidth)
			else: 
				s= canPack(d1) 
				if s is 0:
					addRect(d1,binList)
					addBin((BinHiegth-d1[0]),BinWidth-d1[1])
				else:
					BFFpack(d1,s)		
			i+=1				


if __name__ == '__main__':

	H=np.random.randint(3,11,8)
	W=np.random.randint(2,6,8)	

	rect = zip(H,W)
	rect=sorted(rect)	
	binFF(rect)

	print(binList)
	print(DyList)