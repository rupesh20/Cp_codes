#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f first
#define s second
#define mod 1000000007
#define inf 1e9
#define pi pair<ll,ll>
#define pii pair<ll,pi>
#define f first
#define s second
#define rep(i,n) for(int i=0;i<n;i++)
#define eps 1e-9

int main(){
	int t,flag=0,sum;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n;
		d=n+1;
		sum=0;
		while(d>0)
        {
			sum+=d%10;
			d=d/10;

		}

		int x;
	while(sum>10)
	{
	x=sum;
		while(x>0)
		{
            sum+=x%10;
            x/=10;

		}

        if(sum%10==0){
        	flag=1;
            break;
        }

	}
	if(flag==1||sum%10==0){
		cout<<1<<endl;
	}
	else{
		cout<<sum<<endl;
	}
}
	return 0;
}
