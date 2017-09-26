#include <bits/stdc++.h>
using namespace std;
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
#define rep(i,n) for(int i=0;i<n;i++)
#define p push

std:: vector<vector <int> >vr;
int visited[10000],c=0;
std:: queue<int>q;
void bfs(int n){
	q.p(n);
	visited[n]=1;
	while(!q.empty()){
		int t = q.front();
		q.pop();
		c++;
		for(int i = 0;i < vr[ t ].size() ; i++)
        {
            if(visited[ vr[ t ][ i ] ] == false)
            {

                 q.push(vr[ t ][ i ]);
                 visited[ vr[ t ][ i ] ] = true;
             }
	}
}
}
int main(){
	int t,j,k,m;
	cin>>t;
	while(t--){
		cin>>m;
		 vr.clear();
        vr.resize(m+5);
		rep(i,m){
			cin>>j;
			cin>>k;
			j--;
			k--;
			vr[j].pb(k);
			vr[k].pb(j);
		}
		memset(visited,0,sizeof(visited));
		rep(i,m){
			if(visited[i]==0){
				bfs(i);
			}
			else
				continue;	}
		cout<<c<<endl;
	}
	return 0;
}
