# include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,m,p,q,c=0,i;

	int arr[m],arr1[n];

	scanf("%d",&t);
	while(t--)
	{
		c=0;
		scanf("%d",&m);
		scanf("%d",&n);
		for(int i=0;i<m;++i){
			scanf("%d",&p);
			arr[i]=p;
		}
		for(int i=0;i<n;++i){
			scanf("%d",&q);
			arr1[i]=q;
		}
			sort(arr1,arr1+n);
			sort(arr,arr+m);
			int j=m-1,i=0;
	if(m<=n){
		while(i<=j){
			if(arr[i]<arr1[i]||arr[j]<arr1[j]){
				c=1;break;
			}
			++i;
			--j;
		}
		if(c==1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	else{
		cout<<"NO"<<endl;
	}
	}
}
