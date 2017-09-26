doubleAll x = x + x

multi x y = x * y
 
sod n = 0 return()
sod n = do 
		d = n mod 10
		n = n /10 
		d=d+sod(n)