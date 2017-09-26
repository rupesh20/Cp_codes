#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define pi pair<int ,int >
using namespace std;
int N,M;
int LOC[111][111];
 int conf(int k,int l){
 	if(k>=0&&k<N&&l>=0&&l<N)
 		return true;
 	return false;
 }
int main(){
	cin>>N>>M;

	int arr[N][N];
    int x;
	std::map< pair<int , int >, int > FLT;
for(int i=-M;i<=M;++i){
		for(int j=-M;j<=M;++j){
			cin>>x;
			FLT[{i,j}]=x;
		}
	}

	rep(i,N){
		rep(j,N){
			cin>>arr[i][j];
		}
	}

	rep(i,N){
		rep(j,N){
			for(int k=-M;k<=M;k++){
				for(int q=-M;q<=M;q++){
					if(conf(i+k,j+q)){
						LOC[i][j]+=arr[i+k][j+q]*FLT[{k,q}];
					}
				}
			}
		}
	}

	rep(i,N){
		rep(j,N){
			cout<<LOC[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
