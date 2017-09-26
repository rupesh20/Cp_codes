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

lli lcs(string s,string p){
	lli res=0;
	int m=s.length(),n=p.length();
	int L[m+1][n+1];
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			L[i][j]=0;
		}
	}

	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(s[i-1]==p[j-1])
				L[i][j]=1+L[i-1][j-1];
			else
				L[i][j]=max(L[i][j-1],L[i-1][j]);
		}
	}
	return L[m][n];
}

int main()
{
	string s1,s2;
	cin>>s1>>s2;

	//scanf("%s,%s",&s1,&s2);
	int ans;
	ans=lcs(s1,s2);
	cout<<ans<<endl;
	return 0;
}