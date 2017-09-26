#include <bits/stdc++.h>
#include<stack>
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
//sample test case [ 4 2 1 -5 -8 7 5 -6 -7 -5 -5 -6 2  6 -5]


int main(){
	int t;
	cin>>t;
	int arr[t];
	rep(i,t){
		cin>>arr[i];
	}
	int maxSum=inf,
	currentSum=0,
	currentstart=0,i1,i2;
	rep(end,t){

		currentSum+=arr[end];

		if(currentSum>maxSum){
			maxSum=currentSum;
			i1=currentstart;
			i2=end;
		}

		if(currentSum<0){
			currentstart=end+1;
		}
	}
	cout<<maxSum<<" "<<i1<<" "<<i2;
	return 0;
}