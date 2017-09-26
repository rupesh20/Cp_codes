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
    int t;
    cin>>t;

	int x1,y1,x2,y2;
	while(t--){
        cin>>x1>>y1>>x2>>y2;
	if(x1!=x2&&y1!=y2){
		cout<<"sad"<<endl;
	}
	else{
		if(x1==x2){
			if(y1<y2){
				cout<<"up"<<endl;
			}
			else{
				cout<<"down"<<endl;
			}
		}
		if(y1==y2){
			if(x1<x2){
				cout<<"right"<<endl;
			}
			else{
				cout<<"left"<<endl;
			}
		}
	}
	}
return 0;
}
