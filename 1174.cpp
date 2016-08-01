#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

class Graph{
	
	public: 
		vector<vector<int>> adj;
		int V;
		bool* isMarked;
	Graph(int V){
		this->V = V;
		isMarked = new bool[V];
		for(int i = 0; i< V;i++){
			adj.push_back(vector<int>());
			isMarked[i] = false;		
		}
	}
	
	vector<int> getAdj(int v){
		return adj[v];
	}
	
	void addEdge(int src,int dst){
		adj[src].push_back(dst);
		adj[dst].push_back(src);
	}
	
	void dfs(int n){
			
		isMarked[n] = true;
		
		vector<int> a = getAdj(n);
		for(int i = 0; i < a.size(); i++){
			if(!isMarked[a[i]]){
				
				dfs(a[i]);
			}
		}
		
	}
	
	bool allMarked(){
		
		for(int i = 0; i < V; i++){
			if(!isMarked[i])
			return false;
			
		}
		return true;
	}
};
int main () {
	
	int t;
	scanf("%d", &t);
	
	while(t--){
		
		int v,e;
		scanf("%d %d",&v,&e);
		
		Graph g(v);
		for(int i = 0; i < e;i++){
			int dst;
			int src;
			
			scanf("%d %d",&src,&dst);
			g.addEdge(src,dst);
	
		}
		
		g.dfs(0);
		bool res= g.allMarked();
		printf("%s\n", res ? "yes" : "no");

	}	
	return 0;
}