#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,s2="invento";
	cin>>s;
	for(int i=0;i<s.length();++i)
		s[i]=tolower(s[i]);
	if(s.find(s2)!=string::npos)cout<<"Good";
	else cout<<"Bad";
	return 0;
}
