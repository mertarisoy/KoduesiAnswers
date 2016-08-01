#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <iterator>
#include <queue>
using namespace std;

typedef vector<vector<int> > vvi;

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
               
               int n,k;
               int id = 1;
               cin >> n >> k;
               
               bool complete = false;
               
               vvi g;
               for (int i = 0; i <= n ; i++){
                  g.push_back(vector<int >());
               }

               map<string,int> m;
               for(int i = 0; i < k ; i++){
                       
                       string src,dst;
                       cin >> src >> dst;
                       
                       if(m[src] == 0)
                       m[src] = id++;
                       
                       if(m[dst] == 0)
                       m[dst] = id++;
                       
                       g[m[src]].push_back(m[dst]);
                       g[m[dst]].push_back(m[src]);
               }
               
               string s,d;
               cin >> s >> d;
               
               int start = m[s];
               int dest = m[d];
               
               int cnt = 0;
               
               queue<int> q;
               bool visit[n+1];
               int parent[n+1];
               
               for(int i = 0; i <= n;i++){
                       visit[i] = false;
                       parent[i] = 0;
               }
               
               q.push(start);
               while(!q.empty()){
                         
                         if(complete)
                         break;
                         
                         int v = q.front();
                         q.pop();
                         
                         for(vector<int>::iterator itr = g[v].begin(); itr != g[v].end(); itr++){
                             
                             if(!visit[*itr]){
                                 q.push(*itr);
                                 parent[*itr] = v;
                                 visit[*itr] = true;
                                 
                                 if(*itr == dest){
                                    complete = true;
                                    break;        
                                 }
                                 
                             }
                         }
               }

               
               while(dest != start){
                  
                  dest = parent[dest];
                  cnt++;
               }
               
               cout << cnt - 1 << endl;
    }
       
}