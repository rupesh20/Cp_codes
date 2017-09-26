
#include <bits/stdc++.h>
 using namespace std;

bool prime_power(int k){
	int c=0;

for(int i=2;i<=k;i++)
{
	if(k%i==0)
	{
			while(k%i==0)
			{
				k/=i;

			}
		if(k==1){
			c=1;break;
		}
			else {
				c=2;break;
			}
    }

}
 if(c==1) return true;
    else return false;
}

int chance_of_win(int k)
{
	if(prime_power(k))
	{
		return false;
	}
	return true;
}
 int main(){ 
 	int t,n,c,temp,prevc;
 	cin>>t;

 		while(t--){
 			cin>>n;
 			temp=n;
 			c=0;
 			if(n==1){
 				cout<<"Chef"<<endl;
            }
 			else if(n%2==0)
 			{
 			    if(n==2){cout<<"Chef"<<endl;}
 			    else{
 				for(int i=2;i<=n/2;i++)
 				{
 				    prevc=c;
 					if(temp%i==0)
 					{
 						while(temp%i==0)
 						{
 							temp/=i;
 						}
 					for(int j=i;j<=n;j*=i)
 						{
 							if(chance_of_win(n-j))
 							{
 								n-=j;
 								c++;
 								break;
 							}
 						}
 						if(prevc==c)break;
 					}
 				}
 				if(c%2!=0)	cout<<"Chef"<<endl;
 				else	cout<<"Misha"<<endl;
 			}}
 			else{
 				if(prime_power(n)){
 					cout<<"Chef"<<endl;
 					//printf("%s\n","Chef" );
 				}
 				else{
 					c=0;
 					while(1)
 					{
 						--n;
 						if(prime_power(n)){
 							c=1;break;
 						}

 					}
 					if(c==1){
 						cout<<"Misha"<<endl;
 						//printf("%s\n","Misha" );
 					}
 					else{
 						cout<<"Chef"<<endl;
 						//printf("%s\n","Chef" );
 					}
 				}
 			}
 		}
 		return 0;
 }
