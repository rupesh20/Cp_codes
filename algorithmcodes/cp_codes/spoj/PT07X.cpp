#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define II ({int a; scanf("%d", &a); a;})
#define LL ({ll a; scanf("%lld", &a); a;})
#define rep(i,n) for(int i=0;i<n;i++)
#define ulli unsigned long long int
#define lli long long int 

#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

#define PB(x) push_back(x)

#define M 100001

using namespace std;
vector<int> g[M];
int dp[50000];
int main (){
	lli n,sum;
	scanf("%lld",&n);
	lli A[n],m;	
	rep(i,n){
			cin>>A[i];
	}
	scanf("%lld",&m);
	lli ans=0;
	while(m--){
		int a=II,b=II,k=0;
		sum=A[a];
		for(int i=a+1;i<=b;i++){
			dp[k++]=sum;
			cout<<dp[k-1]<<endl;
			sum+=A[i];
						
		}

		lli index=0;
		for(int j=0;j<=b;j++){
			index=0;
			for(int k=j+1;k<=b;k++){
				if(dp[index]<(dp[k]-dp[j]))
					dp[index++]=dp[k]-dp[j];
			}
		}
		
		cout<<max_element(A,A+n);		
	}

	return 0;
}
