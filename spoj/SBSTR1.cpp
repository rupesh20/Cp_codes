#include <bits/stdc++.h>

using namespace std;

int main()
{
cout<<"hi";
int ans=0;
	for (int i=1;i<=10;i++){
		if(i%2==1)
			continue;
		if(i%3==0)
			ans+=(2*i);
		else
			ans+=i;	
		cout<<ans;
	}
	cout<<ans;
return 0;
}
