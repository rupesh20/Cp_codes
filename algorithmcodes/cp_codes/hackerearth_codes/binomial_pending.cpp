#include <bits/stdc++.h>
using namespace std;

#define ll long long
int arr[200];
// 4,2 = 6
void imporve_bino_coff(int n, int k)
{
	//double res=1;
	arr[0]=1;
	int carry=0,x=0;

	for(int i=n-k+1;i<=n;i++)
	{
		x=0;
		res=a[x]*i+carry;
		a[x]=res%10;
		carry=res/10;
		if(carry!=0)
		{
			a[x++]=carry;
		}		
	}

	while(x>0)
	{
		cout<<arr[x--];
	}
	/*for(int i=1;i<=k;i++){
		res=res*(n-k+i)/i;
	}*/
	//return (int)(res+0.01);
}


int binomial_coff(int n, int k){
	int res=1;
	for(int i=n-k+1;i<=n;i++){
		res*=i;
	}
	for(int i=2;i<=k;i++){
		res/=i;
	}
	return res;
}
int main(){
	int n,k;
	cin>>n>>k;
	int p=improve_bino_coff(n,k);

	cout<<p<<endl;
	return 0;
}
