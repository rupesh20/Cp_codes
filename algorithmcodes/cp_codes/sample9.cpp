#include <bits/stdc++.h>
using namespace std;
 

int main(){
	int N,M,x,y,val=0;
	scanf("%d %d",&N,&M);
	x=2*M+1;y=2*M+1;
	int GN[x][y],F[N][N];
	rep(i,x){
		rep(j,y){
			cin>>GN[i][j];
		}
	}
	rep(i,N){
		rep(j,N){
			cin>>F[i][j];
		}
	}

int i,j;
	for(i=0;i<N;++i){
	for(j=0;j<N;++j){
		for(V=-M,J=-M;V<=M,J<=M;V++,J++){
			if((i+V)<0){
			F[i][j]+=F[i+V][j+J]*GN[V][J];	
			}
		}
		}
	}
}
	
	return 0;
}