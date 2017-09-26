#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int fact(int t)
{
	long long int k=1,ct=0;
	for(int i=2;i<=t;++i)
	{
		if(t%i==0)
		{cout<<"ok";
			while(t%i==0)
			{
				ct++;
				t=t/i;
			}
		}
		k=k*(ct+1);
	}

}
int main()
{
  int a,b;
  cin>>a>>b;
  if(a==b)cout<<"infinity";
  else
  	if(a>b)fact(a-b);
  	else fact(b-a);
    return 0;
}
