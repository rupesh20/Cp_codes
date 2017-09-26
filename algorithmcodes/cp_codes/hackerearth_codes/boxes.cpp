#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
int n,hmin;
int ans=0;
int height[n],width[n],dum[n];
int  Find(int arr[],int n,int k){
    int i=0;
    while(i<n){
        if(arr[i]==k){
           return i;
        }
    }
    return 0;
}

int FindRange(int j,int i,int hmin)
{

	while(i!=j)
	{
		if((dum[i]+dum[j])>=hmin)
			return i;
		i++;
	}
 	return -1 ;
}

int packing(int arr[],int n,int k,int hmin)
{
	int MAX = k,Tht=hmin,i=0;j=n-1;
	while(dum[j]!=0){
		int tVal=arr[j];
		if(i==j)
			break;
		if(tVal>=MAX)
		{
			ans+=width[k];
			width[k]=0;
			height[k]=0;
		}
		else
		{
			if(FindRange(j,i,hmin)!=-1)
			{
				i=FindRange(j,i,hmin);
				ans+=width[j];
				width[i]=0;
				width[j]=0;
				height[i]=0;
				height[j]=0;
			}
		}	
		j--;
	}
}

int main()
{
	scanf("%d",&n);
	scanf("%d",&hmin);

	rep(i,n)
		cin>>height[i]>>width[i];
	rep(i,n)
		dum[i]=height[i];
	sort(dum,dum+n);	            	
	ans=packing(dum,n);
	cout<<ans<<endl;
	return 0;
} 




