#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define f first
#define s second
#define mod 1000000007
#define pii pair<ll,pi>
#define inf 1e9
#define pi pair<ll,ll>
#define f first
#define s second
#define rep(i,n) for(ll int i=0;i<n;i++)
#define eps 1e-9

void merge(int arr[ ], int temp[ ], int left, int mid, int right){
	int lend=mid-1;
	int temp_pos=left;
		while(left<=lend&&mid<=right){
			if(arr[left]<=arr[mid])
				temp[temp_pos++]=arr[left++];
			else
				temp[temp_pos++]=arr[mid++];
		}
		while(left<lend){
			temp[temp_pos++]=arr[left++];
		}
		while(mid<right){
			temp[temp_pos++]=arr[mid++];
		}
		for(int i=right-1;i>=0;i--)
			arr[i]=temp[temp_pos--];
}
void merge_sort(int arr[], int temp[], int left ,int right){
	int mid=(left+right)/2;
	if(left<right){
		merge_sort(arr,temp,left,mid);
		merge_sort(arr,temp,mid+1,right);
		merge(arr,temp,left,mid+1,right);
	}
}

int main(){

	int n;
	scanf("%d",&n);
	int arr[n],temp[2*n];
	for(int i=0;i<n;++i){
		scanf("%d",&arr[i]);
		}
	merge_sort(arr,temp,0,n-1);
	for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
		}
	return 0;
}
