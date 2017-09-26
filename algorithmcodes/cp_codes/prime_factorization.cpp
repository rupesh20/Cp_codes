#include <bits/stdc++.h>

using namespace std;
#define max 10000000
bool arr[max];
int i,c,n;
bool sieveofara(int n){
    int j;
	memset(arr,true,sizeof(arr));
		for(i=2;i*i<n;i++){
			if(arr[i]){
				for(j=2*i;j<=n;j=i+j){
					arr[j]=false;
				}}
		}
		if(arr[n]) return true;
	return false;
}
int main(){

	while(1){
		cin>>n;
			if(n==0){break;}
			if(sieveofara(n)){
				cout<<"2 factors"<<endl;
			}
		while(n!=1){
                c=0;
			for(i=2;i<=n;i++)
            {

				if(n%i==0)
				{

					while(n%i==0)
					{
						n=n/i;
						c++;
					}
                    cout<<i<<endl;
				}

			}
			cout<<c<<endl;
		}
	}
			return 0;
}
