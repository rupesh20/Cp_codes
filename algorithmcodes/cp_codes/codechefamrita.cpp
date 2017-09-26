#include <bits/stdc++.h>
#include<stack>
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
#X-oring of nodes inn dfs order
//constraints 10^5 n ,m , 10^12 , arr[i]
int visited[200000];
std:: vector < vector<int> > vr;
ll int arr[200000];
std:: stack <int> s;
int ans1=0,ans;
void dfs(int n){
    s.push_back(vr[n]);
    while(!s.empty()){
        visited[n]=1;
        int t= s.pop();
        for(int i=0;i<vr[t].size();++i){
            if(!visited(t)){
                s.push(vr[t][i]);
            }

        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,j,k;
        cin>>n;
        long int arr[n];
        rep(i,n){
            cin>>arr[i];
        }

        vr.clear();
        vr.resize(n+5);

        rep(i,n){
            cin>>j>>k;
            j--;
            k--;
            vr[j].pb(k);
            vr[k].pb(j);
        }


        memset(visited,0,sizeof(visited));//sets visited array to '0'

        ll int ans=0;

        rep(i,n){

            if(visited[i]==0){

                dfs(i);

            }
            else
                continue;
        }

    }
    return 0;
}
