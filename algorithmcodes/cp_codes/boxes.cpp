#include <bits/stdc++.h>
using namespace std;

int  Find(int arr[],int n,int k){
    int i=0;
    while(i<n){
        if(arr[i]==k){
           return i;
        }
        i++;
    }
    return 0;
}

int main(){
    int n,hmax;
    cin>>n>>hmax;
    int hei[n],wid[n];

    for(int i=0;i<n;i++)
        cin>>hei[i];
    for(int i=0;i<n;i++)
        cin>>wid[i];
    int dum[n];
    for(int j=0;j<n;j++)
        dum[j]=hei[j];

    sort(dum,dum+n);
    int p=n-1,MAX,ans=0,temp=hmax,k,c=0;

  while(p>=0){
        MAX=dum[p];
        temp=hmax;
        k=0;
        if(MAX<=hmax){
            k=Find(hei,n,MAX);
            ans+=wid[k];
            hei[k]=0;
            wid[k]=0;
            c++;
            temp-=MAX;
                while(Find(hei,n,temp)){
                    if(temp==0)
                        break;
                    k=Find(hei,n,temp);
                    MAX=hei[k];
                    hei[k]=0;
                    wid[k]=0;
                    c++;
                    temp-=MAX;
                }
    if(c==8)
        break;
        }
        p--;
  }
    cout<<ans<<"answer";
    return 0;
}
