#include <bits/stdc++.h>
	using namespace std;

	int main(){
		int val,c=0,d=1,i=1;
		cin>>val;

		while(d>0)
        {
			d= val/(pow(5,i));
			c=c+d;
			++i;

        }
cout<<c;
return 0;
	}
