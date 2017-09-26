import numpy as np
import random as rd 
import sys
import matplotlib.pyplot as plt 
import partition
#first fit 
binList = [] #rectangles per bin information
DyList = [] # all bins remaining size
Rwidth = []
Rheight = []
hashList = [0]*10000

#final=rec
#print(final)

def addRect(data,list):
	binList.append([ ])
	L = len(binList)-1
	binList[L].append(data)

def listlen(list):
	x=len(list)
	if x is None:
		return 0
	return x 


def addBin(x,y,l,h):
	
	DyList.append([ ])
	n = len(DyList)-1
	if x<=0 or y<=0: 
		DyList[n].append(0)
		DyList[n].append(0) 
	else:
		DyList[n].append(x)
		DyList[n].append(y)
		DyList[n].append(l)
		DyList[n].append(h)
		
def canPack(data):
	
	x=data[0]
	y=data[1]
	index=0

	for z in DyList:
		c=0
		
		binbase=z[2]
		nextLvl=z[3]
		while x+binbase<=BinHiegth:
				rh=z[0]
				rw=z[1]
		
				if y<=z[1]:
					rw-=y
					DyList[index][1]=rw
					return index

				if x+binbase>BinHiegth:
					c=1 
					break				
				else:
					DyList[index][3]=(nextLvl+x)	
					DyList[index][0]=(rh-x)
					DyList[index][2]=(nextLvl)
					DyList[index][1]=(BinWidth)
				
				z=DyList[index]	
				binbase=z[2]
				nextLvl=z[3]
		if c is 1:
			break	
		index+=1

	return 0

def canPackNF(data):
	x=data[0]
	y=data[1]
	l=listlen(DyList)-1
	if l<0:
		return None
	else:
		z=DyList[l]
		binbase=z[2]
		nextLvl=z[3]	
		while x+binbase<=BinHiegth:
			rh=z[0]
			rw=z[1]

			if y<=z[1]:
				rw-=y
				DyList[l][1]=rw
				return l

			if x+binbase>BinHiegth:
				return 0				
				
			else:
				DyList[l][3]=(nextLvl+x)	
				DyList[l][0]=(rh-x)
				DyList[l][2]=(nextLvl)
				DyList[l][1]=(BinWidth)
		
			z=DyList[l]	
			binbase=z[2]
			nextLvl=z[3]	



def binFF(data):
	base=0
	m=listlen(data)
	if m is 0:
		return None

	else:
		i=0
		while i<=m:
			
			d1 = data.pop()
			if len(data) is 0:
				break
			
			if len(binList) is 0:
				addRect(d1,binList)
				Rheight = (BinHiegth-d1[0])
				Rwidth = (BinWidth-d1[1])
				addBin(Rheight,Rwidth,base,d1[0])
			
			else: 
				x=canPack(d1)
				
				if x is not 0:
					binList[x].append(d1)	
				else:
					addRect(d1,binList)
					Rheight = (BinHiegth-d1[0])
					Rwidth = (BinWidth-d1[1])
					addBin(Rheight,Rwidth,base,d1[0])
	
	
def binNF(data):
	base = 0 
	m=listlen(data)

	if m is 0:
		return None

	else:
		i=0
		while i<=m:
			d1=data.pop()
			if len(data) is 0:
				break

			if len(binList) is 0:
				addRect(d1,binList)
				Rheight = (BinHiegth-d1[0])
				Rwidth = (BinWidth-d1[1])
				addBin(Rheight,Rwidth,base,d1[0])
			
			else:
				x=canPackNF(d1)
				if x is not 0:
					binList[x].append(d1)
				else:
					addRect(d1,binList)
					Rheight = (BinHiegth-d1[0])
					Rwidth = (BinWidth-d1[1])
					addBin(Rheight,Rwidth,base,d1[0])		

"""
	MaxAreaSearch: Hash maps all the rectangles of certain partition 
					in the hashList list, O(n/2)
"""
def MaxAreaSearch(x,data):
	i=0 
	j=len(data)-1
	c=0
	while i != j:
		if data[i][1] is  x :
			hashList[i] = data[i][0]*data[i][1]
			c+=1
		elif data[j][1] is x:
			hashList[j] = data[j][0]*data[j][1]
			c+=1 
		i+=1
		j-=1
	#hashList.index(max(hashList))	
	return c 
"""
	OptimizePack : P(n): partitions of n {(3),(2,1),(1,1,1)}
		  		   Packs all the rectangles on the basis of P(n)


"""
"""def OptimizePack(data):
	x_width = partition.Partition(BinWidth)
	x_width=(sorted(x_width))			
	l_x = len(x_width)
	
	while l_x>0:

		if l_x is 1:
			n=x_width.pop()
			if MaxAreaSearch(n[0],data) is 1:
				while c>0: 
					Mpos = hashList.index(max(hashList))
					x=data[Mpos]
					addRect(x,binList)				
				
					hashList[pos]=0
					c-=1
			else:

		l_x-=1	
"""

if __name__ == '__main__':
	BinHiegth = 11
	BinWidth = 6

	H=np.random.randint(1,11,50)	
	W=np.random.randint(1,6,50)	
	rect = zip(H,W)
	rect=sorted(rect)
	rect1 = rect
	# In sys args not more than 2 only 1 strictly one 
	if sys.argv[1] is 'F':
		binFF(rect)
		print ("dumm: \n ",DyList)
		print (len(binList))
		for x  in binList:
			print(x,' \n')
	
	elif sys.argv[1] is 'N':
		binNF(rect1)
		print (DyList)
		print (binList)	

	if sys.argv[1] is 'O':
		OptimizePack(rect)
		print rect