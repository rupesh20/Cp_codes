#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void modulo(ll int a,ll int b){
	ll int y=a,x=1;
	while(b>=1)
	{
		if((b%2)==1)
		{
            x=(x*y)%mod;
		}
		y=(y*y)%mod;
		b=(b/2);
	}

	cout<<(x)%mod<<endl;
}
int main()
{
	ll int a,b;
	cin>>a>>b;
	modulo(a,b);
	return 0;
}
