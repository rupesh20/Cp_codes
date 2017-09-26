#include<bits/stdc++.h>
#define max 4
    using namespace std;

// working code of DFS and graph implementation 
    void dfs(int v[][max],int k,int visited[]){
    		visited[k]=1;
    		int i,j;
    			cout<<k<<" ";
    			for(i=0;i<max;++i){

    					if(visited[i]==0&&v[k][i]!=0)
    						dfs(v,i,visited);
    			}
    }

    void bfs(int k,int v[][max],int visited[]){
        list <int> queue;
        visited[k]=1;
            int i;
            queue.push_back(k);
                while(!queue.empty()){
                    k=queue.front();
                        cout<<k;
                      queue.pop_front();
                        for(i=0;i<max;++i){
                            if( visited[i]!=1&& v[k][i]!=0 ){
                                queue.push_back(i);
                                visited[i]=1;
                            }
                        }  
                }
    }
    void dis_vis(int visited[]){
        for(int i=0;i<max;i++){
            .
                cou<<visited[i]<<endl;

        }
    }
    
int main(){
        int x,y,u,l,d,i,j;
        int visited[max];

               int v[max][max];
                        for(i=0;i<max;i++){
                            for(j=0;j<max;j++){
                                v[i][j]=0;
                            }
                        }
                        cout<<"edges ";
                        cin>>y;
                            for(i=0;i<y;i++){
                                cin>>u;
                                cin>>l;
                                cin>>d;
                                    v[u][l]=d;
                            }

  			  for (int i = 0; i < max; i++){
       				 visited[i] = 0;}
                        d=0;
             cout<<" entre the vertex"<<endl;
                cin>>d;
                   dfs(v,d,visited);
                   bfs(d,v,visited);
                   dis_vis(visited);

        return 0;
    }

// prims algorithm 
/* we need 3 arrays to perform the algorithm 
    and intialize the one key array with INT_max for knowing smallest edge
    and one mst boolean array with false ,as we have not visited any of the
    vertex yet.*/
    /*int mis(int key[],int mst[]){
        int min=INT_MAX,min_index,i=max;
            while(i>0){
                if(mst[i]==false&&key[i]<min)
                    min=key[i];
                    min_index=i;
                i--;    
            }
            return min_index;
    }
    void prims_mst(int v[][max]){
            int parent [v],i;
            int key[v];//array for wieght of a edge
            int  mst[v]; //array to keep a count on visited nodes and added in mst
                for(i=0;i<max;++i){
                        mst[i]=0;
                        key[i]=INT_MAX;
                }
                key[0]=0;
                parent[0]=-1;
           for(i=0;i<max;++i){
                o=min(key,mst);
                mst[o]=1;
                    for(i=0;i<max;++i){
                        if(v[u][i]&&mst[i]==false&&v[u][i]<key[i])
                            parent[i]=o;
                            key[i]=v[u][i];
                    }
           }

    }
    int min_dist(int distance[],int bools){
        int mindst=INT_MAX,index;
            while(){
                if(distance[])
            }
    }

                void dijkastra_pr(int v[][max]){
                    int distance[max];
                        int bools[max],i;
                        for(i=0;i<max;i++){
                            distance[i]=INT_MAX;
                        }
                            distance[0]=0;

                            for(i=0;i<max;i++){
                                    int p=min_dist(dist,bools);
                                    bools[p]=1;


                                        for(int j=0;j<max;++j){
                                                if(v[p][j]!=0&&bools[j]==0&&distance[p]+v[p][j]<distance[j])
                                                    distance[j]=distance[p]+v[p][j];
                                        }
                            }    
                }

             */   