#include <bits/stdc++.h>
using namespace std;

int main(){
	int num,d;
	stack <int > s;

	scanf("%d",&num);
	while(num>0){
		d=num%2;
		s.push(d);
		num=num/2;

	}
	while(!s.empty()){

		cout<<s.top();
        s.pop();
	}
	return 0;
}
