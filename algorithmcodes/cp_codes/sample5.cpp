/* stack <int > s;

s.push(ele);

s.pop();

s.empty();

s.size();

s.top();
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
stack <int> s(10);
	int x;
	scanf("%d","&x");
	s.push(x);
	cout<<s.pop();
return 0;
}