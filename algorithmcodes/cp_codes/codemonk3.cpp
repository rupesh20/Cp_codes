#include <bits/stdc++.h>
using namespace std;
void merge(int k[],int v[],int f[], int n, int m){
	int i=0,j=0,r=0;
	while(i<n&&j<m){
		if(v[i]>=f[j])k[r++]=v[i++];
		else if(v[i]<=f[j])k[r++]=f[j++];
	}
	while(i!=n){
		k[r++]=v[i++];
	}
	while(j!=m){
		k[r++]=f[j++];
	}
}
int main()
{
   int t,i,j,n,m,p,k,l,h;
   scanf("%d",&t);

    	while(t--){

    		scanf("%d",&n);
    		scanf("%d",&m);
		l=abs(n-m+1);
    		int v[n],f[m],k[l];
    		for( i=0;i<n;++i)
    		{
    			cin>>v[i];}
    		for( j=0;j<m;++j)
    		{
    			cin>>f[j];}

    	merge(k,v,f,n,m);
    	for(int x=0;x<l;++x){
    		cout<<k[x]<<" ";
    	}

    	}
    return 0;
}
