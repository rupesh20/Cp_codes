#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long q;
	long long int t;
	scanf("%d",&n);
	scanf("%d",&q);
		int arr[n];
		for(int i=0;i<n;++i)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		while(q--){
			cin>>t;

			if (t<=arr[n-1]&&t>=arr[0])
			{
				printf("%s\n","Yes");
			}
			else{
				printf("%s\n","No" );
			}
		}
		return 0;
}