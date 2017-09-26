#include <bits/stdc++.h>

using namespace std;
int reverse(int t1){
	int temp=t1;
	int c=0,d;
	while(temp>=1){
		d=temp%10;
		c=c*10+d;
		temp=temp/10;
	}
	return c;
}
int main(){
	int t1,t2;
	int t,c=0;
	scanf("%d",&t);

while(t--)
{
	scanf("%d",&t1);
	scanf("%d",&t2);
	int c=0;
		while(t1<=t2)
		{
			if(t1==reverse(t1))c++;
			t1++;
		}
cout<<c<<endl;
}
return 0;
}
