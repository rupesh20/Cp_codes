#include <bits/stdc++.h>
#define mod 1000000007
#define ull unsigned long long
#define li long int
using namespace std;
/*
	long : range : 10^9 OK
*/
li seive_ertos(int arr[ ], int n){
    li c=0;
	for(int i=2;i*i<n;i++){
		if(arr[i]==1){

			for(int j=2*i;j<=n;j+=i){
				arr[j]=0;
			}
		}
	}
	for (int i = 2; i<=n; ++i)
	{
		if(arr[i]==1)c++;
	}
	return c;
}
ull int  fac(li k){
	ull int ans=1;
	for(int i=k;i>=1;--i)
	{
		ans=((ans%mod)*(i%mod))%mod;
	}
	return ans;
}
int main(){
	ull int  n,i;
	ull int l,k;
	cin>>n;
	int arr[n+1];
	for(i=0;i<n+1;i++){
		arr[i]=1;
	}
	l=seive_ertos(arr,n+1);
	k=((fac(n-l)%mod)*(fac(l)%mod))%mod;
	cout<<k<<endl;
	return 0;
}
