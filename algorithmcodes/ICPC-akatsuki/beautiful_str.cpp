#include <bits/stdc++.h>

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
#define rep(i,n) for(ll int i=0;i<n;i++)
#define eps 1e-9

using namespace std;

int main(){
	int n,m;
	cin>>n;
	cin>>m;
	int ar[25],ans;
	string arr[n],arr1[m];
	rep(i,n)
	{
		cin>>arr[i];
	}
	rep(i,m)
	{
		cin>>arr1[i];
	}
	for(int i=0 ; i<n ; ++i)
	{
		int sum=0,k=0;
		string temp1=arr[i];
		for(int j=0 ; j<m ; ++j)
		{
		    string temp2=arr1[j];
		// strcat() function to concate 2 strings
			string temp=strcat(temp2,temp1);

			while(temp[k]!='\0')
			{
				ar[(int)temp[k++]-65]++;
			}
			for(int i=0;i<26;i++)
			{
				sum+=ar[i];
			}
		}
	if(sum==26)ans++;
	}
	cout<<ans;
	return 0;
}
