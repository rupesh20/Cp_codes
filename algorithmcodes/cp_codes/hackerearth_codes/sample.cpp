#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,len,i=0,c=0;
    string s;
    scanf("%d",&t);
    while(t--)
    {
    	cin>>s;
    	len=s.length();
    	int temp=len;
    	i=4;
    	while(s[i]!='.')
        {
    		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    			c++;
    	}
    	temp=temp-c-4;
    	cout<<temp<<"/"<<len<<endl;
    }
    return 0;
}
