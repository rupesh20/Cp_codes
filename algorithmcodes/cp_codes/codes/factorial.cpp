#include<bits/stdc++.h>
    using namespace std;
#define SIZE 200

        int main(){
            int val,t;
        scanf("%d",&t);
            int carry=0;
          int arr[SIZE];
            arr[0]=1;
            int i;
           while(t--){
            scanf("%d",&val);
                int k=0;
              for( i=1;i<=val;i++){
                    for(int j=0;j<=k;j++){
                        arr[j]=arr[j]*i+carry;
                        carry=arr[j]/10;
                        arr[j]=arr[j]%10;
                }
                while(carry){
                        k++;
                    arr[k]=carry%10;
                    carry/=10;
                }
            }
                for(i=k;i>=0;i--){
                    printf("%d",arr[i]);
                    arr[i]=1;}
                cout<<endl;
           }


            return 0;
        }
