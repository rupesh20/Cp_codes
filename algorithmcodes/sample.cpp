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



int visited[200000];
std:: vector < vector<int> > vr;
ll int arr[200000];
ll int sum=0;

void dfs(int n){
    visited[n]=1;
    sum+=arr[n];  
    for(int i=0;i<vr[n].size();i++){
        int t=vr[n][i];
        if(!visited[t])
            dfs(t);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,j,k;
        cin>>n>>m;
        vr.clear();
        vr.resize(n+5);
        //assert call for error detection
        assert(1<=n && n<=100000);
        assert(1<=m && m<=100000);

        rep(i,m){
            cin>>j>>k;
            j--;
            k--;
            vr[j].pb(k);
            vr[k].pb(j);
        }
        rep(i,n){
            cin>>arr[i];
            assert(arr[i]>=0 &&arr[i]<=1000000000000);
        }

        memset(visited,0,sizeof(visited));//sets visited array to '0'

        ll int ans=0;

        rep(i,n){ 

            if(visited[i]==0){
                sum=0;
                dfs(i);
                ans=max(sum,ans);
            }
            else 
                continue;
        }
        cout<<ans<<endl;
    }
    return 0;
}
