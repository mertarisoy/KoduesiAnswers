import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.PriorityQueue;
import java.util.Scanner;


public class Main {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		int t = scan.nextInt();
		while(t-- != 0){
			
			int n = scan.nextInt();
			Graph g = new Graph(n);
			for(int i = 0; i < n;i++){
				g.addVertex(scan.nextInt(),scan.nextInt());
			}
			
			g.generateEdges();
			double res = g.MST();
			
			DecimalFormat df = new DecimalFormat("0.00");
			System.out.println(df.format(res).replace(",","."));
			
		}
		
	}
	
	static class Graph{
		
		public int V;
		ArrayList<ArrayList<Edge>> adj;
		ArrayList<Vertex> vertexList;
		
		public Graph(int V){
			
			this.V = V;
			adj = new ArrayList<ArrayList<Edge>>();
			
			for(int i = 0; i < V;i++){
				adj.add(new ArrayList<Edge>());
			}
			
			vertexList = new ArrayList<Vertex>();
		}
		
		public void addVertex(int x, int y){
			vertexList.add(new Vertex(x,y));
			
		}
		public void addEdge(int src,int dst,double weight){
			Edge e = new Edge(src,dst);
			e.weight = weight;
			adj.get(src).add(e);
			adj.get(dst).add(e);
			
		}
		
		public void generateEdges(){
			for(int i = 0; i < V-1;i++){
				for(int j = 1; j < V;j++){
					Vertex v1 = vertexList.get(i);
					Vertex v2 = vertexList.get(j);
					
					double weight = Math.sqrt(Math.pow(v2.x-v1.x,2)+Math.pow(v2.y-v1.y, 2));
					addEdge(i,j,weight);
					
				}
			}
		}
		
		public double MST(){
		
			PriorityQueue<Edge> pq = new PriorityQueue<>(V);
			boolean [] isMarked = new boolean[V];
			
			double total = 0;
			
			for(int i = 0;i < adj.get(0).size();i++){
				pq.add(adj.get(0).get(i));
			}
			
			isMarked[0] = true;
			while(!pq.isEmpty()){
				
				Edge e = pq.poll();
				if(isMarked[e.src] && isMarked[e.dst])
					continue;
				
				isMarked[e.src] = true;
				isMarked[e.dst] = true;
				
				total += e.weight;
				
				for(int i = 0;i < adj.get(e.src).size();i++){
					pq.add(adj.get(e.src).get(i));
				}
				
				for(int i = 0;i < adj.get(e.dst).size();i++){
					pq.add(adj.get(e.dst).get(i));
				}
			}
			
			return total;
			
		}
	}
	
	static class Edge implements Comparable<Edge>{
		
		public int src;
		public int dst;
		public double weight;
		
		
		public Edge(int src, int dst) {
			super();
			this.src = src;
			this.dst = dst;
			this.weight = 0;
		}


		@Override
		public int compareTo(Edge o) {
			if(weight > o.weight)
				return 1;
			if(weight < o.weight)
				return -1;
			return 0;
		}
	}
	
	static class Vertex{
		
		public int x;
		public int y;
		
		public Vertex(int x,int y){
			this.x = x;
			this.y = y;
		}
	}
}