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
		if(n>=1&&n<=8){
			cout<<(n+1)<<endl;
		}
		else{
			int x=(n%9)+1;
			cout<<x<<endl;
		}
}
	return 0;
}
