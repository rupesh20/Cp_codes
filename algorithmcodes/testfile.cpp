#include <bits/stdc++.h>
using namespace std;
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

int main()
{
  int k,q,p=0,temp,temp1,i,a,t;

    scanf("%d",&k);
    long int arr[k];
    int h=k;

    for(int i=0;i<k;++i)
    {
        scanf("%d" , &arr[i]);
    }
    scanf("%d" , &q);
    long int arr1[q];

        for(intj=0;j<q;++i){
            scanf("%d",&arr1[j]);
            if(arr1[i]==1)count++;
            if(arr1[i]==2)count1--;
        }


        if(count1>=count){
                a=arr[(k-1)%k];
                temp=arr[0];
                t=count1-count;
         while(t--)
         {       
            for(int i=0;i<k;++i)
            {
                temp1=arr[(i+1)%k];
                arr[(i+1)%k]=temp;
                temp=temp1;
            }
        }
        arr[0]=a;
        }
        else {
                a=arr[0];temp=arr[(k-1)%k];
                t=count-count1;
           while(t--){     
            for(int j=k-1;j>=0;--j){
                temp1=arr[(j-1)%k];
                arr[(j-1)%k]=temp;
                temp=temp1;
            }}
            arr[(k-1)%k]=a;
        }

    for(int i=0;i<h;++i){
    printf("%d ",arr[i]);
        }
    return 0;
}

