#include <iostream>
#include <algorithm>
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

using namespace std;
//__gcd();

sieve
 /* 	for(i=2;i*i<=n;i++){
			  		if(arr[i]==true){
			  			for(j=i*2;j<=n;j=j+i){
			  				arr[j]=false;}}
			  	}
			  	for(i=2;i<n;i++){
			  		if(arr[i]==true){
			  			cout<<i<<endl;}
			  	}
*/		
int factors(int val){
	for(int i=1;i*i<=n;i++){
		if(val%i==0){
			if(n/i==i)c++;
			else
				c+=2;
		}
	}
}	  	
bool isprime(int n){
	for (int i=2;i*i<=n;++i){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int reverse(int t1){
	int temp=t1;
	int c=0,d;
	while(temp>=1){
		d=temp%10;
		c=c*10+d;
		temp=temp/10;
	}
	return c;
}
int main(){
	int t;
	cin>>t;
	int m,n;
	while(t--){
		cin>>m>>n;
		int arr[m][n];
		rep(i,m)
		{
			rep(j,n)
			{
				cin>>arr[i][j];
			}
		}

		int inc=1,tempr=0,tempc=0,max_sum=0,tempsum=0;

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				tempr=j;tempc=j;

				while(tempc<n&&tempr<m)
				{
					in
					tempr++;
					tempc++;
				if(tempr%2==0)
				{
					
					while(k<m&&temp<n){
						tempsum+=arr[k][temp];
						k++;
						temp--;
					}
					while(l<tempr&&p<tempc){
						tempsum+=arr[l][p];
						l++;
						p++;
					}
					tempsum-=arr[tempr/2][tempc/2];//common point
					if(tempsum>max_sum){
						max_sum=tempsum;
					}
				}
				else{
				
					while(k<m&&temp<n){
						tempsum+=arr[k][temp];
						k++;
						temp--;
					}
					int l=,p=;
					while(l<tempr&&p<tempc){
						tempsum+=arr[l][p];
						l++;
						p++;
					}
					if(tempsum>max_sum){
						max_sum=tempsum;
					}
				}
				}
				
			}
			tempsum=0;
		}
	}
	

}