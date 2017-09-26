#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define f first
#define s second
#define mod 1000000007
#define inf 1e9
#define pi pair<ll,ll>
#define pii pair<ll,pi>
#define f first
#define s second
#define rep(i,n) for(ll int i=0;i<n;i++)
#define eps 1e-9

using namespace std;
int main(){
	ll int t,n;
	scanf("%lld",&t);

	while(t--){
		scanf("%lld",&n);
		ll int arr[n];
		ll int ct1=0,ct2=0,ct3=0;
		rep(i,n){
			cin>>arr[i];
			if(arr[i]==1)ct1++;
			if(arr[i]==0)ct2++;
			if(arr[i]==-1)ct3++;
		}
		if(ct3>1)
			if(ct3+ct2+ct1==n&&ct1>=1)
				printf("%s\n","yes");
			else
				printf("%s\n","no");
		else
			if(ct1+ct2==(n-1)||ct1+ct2==n)
				printf("%s\n", "yes");
			else
				printf("%s\n", "no");
	}
	return 0;
}

//sql commands

insert into tableName values ('abc',101);

delete from tableName;

delete from tableName where condition;

alter table instructor Add Sub_name varchar()

alter  table tablename Drop a;

drop table tablename; 


Select * from table name ;

Select I_id from instructor where clause ;


