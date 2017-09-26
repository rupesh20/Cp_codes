#include <bits/stdc++.h>
#define ll long long
using namespace std;

void modulo(ll int a,ll int b,ll int c){
	ll int y=a,x=1;
	while(b>=1)
	{
		if((b%2)==1)
		{
            x=(x*y)%c;
		}
		y=(y*y)%c;
		b=(b/2);
	}

	cout<<(x)%c<<endl;
}
int main()
{
	ll int a,b,c;
	cin>>a>>b>>c;
	modulo(a,b,c);
	return 0;
}
