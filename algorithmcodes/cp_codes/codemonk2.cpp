#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  	int t,i,j,k;
  	cin>>t;
  	char a[30];
  		while(t--){
  			cin>>s;
  			i=0; a[0]=s[0]; j=1;
  		while(s[i]!='\0'){
  			if(s[i]!=s[i+1]){a[j]=s[i+1];}
  			++i;++j;
  			}
  			k=0;
  			while(a[k]!='\0'){cout<<a[k];++k;}
  			cout<<endl;
}
    return 0;
}
