import numpy as np
import sys

def Partition(Num):
	ans = set()
	ans.add((Num,))
	for x in range(1,Num):
		for y in Partition(Num-x):
			ans.add(tuple(sorted((x,) + y)))
	return ans
