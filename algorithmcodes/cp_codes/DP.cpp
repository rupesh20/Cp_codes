#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long 
#define MAX 1000
using namespace std;
//recurrence :r(n)=r(n-1)+r(n-3)+r(n-5)
int dp[MAX];
ll int state(int n){
	
	if(n<0)
		return 0;
	if(n==0||n==1)
		return 1;

	if(dp[n]!=0)
		return dp[n];

	return dp[n]=state(n-1)+state(n-3)+state(n-5);
}

int main()
{
	int N;
	scanf("%d",&N);
	state(N);
	cout<<"ans"<<dp[N];
	return 0;
}
