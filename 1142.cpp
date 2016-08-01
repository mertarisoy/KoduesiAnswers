import java.util.Scanner;


public class Main {

	
	public static void main(String[] args) {
		
		
		Scanner scan = new Scanner(System.in);	
		int t = scan.nextInt();
		
		while(t-- != 0){
			
			int row = scan.nextInt();
			int column = scan.nextInt();
			
			
			int startRow = 0;
			int startColumn = 0;
			int endRow = 0;
			int endColumn = 0;
			
			char [][] maze = new char[row][column];
		
			scan.nextLine();
			for(int i = 0; i < row; i++){
				String s = scan.nextLine();
				for(int j = 0; j < column;j++){
					char c = s.charAt(j);
					if(c == 'S'){
						startRow = i;
						startColumn = j;
					}
					else if((i == 0 || j == 0) && c == ' '){
						endRow = i;
						endColumn = j;
					}
					maze[i][j] = c;
				}
				
			}
			
			MazeSolve solver = new MazeSolve(maze);
			solver.startRow = startRow;
			solver.startColumn = startColumn;
			solver.endRow = endRow;
			solver.endColumn = endColumn;
			solver.height = row;
			solver.width = column;
			
			System.out.println(solver.solve());
			
		}
		
	}
	
	static class MazeSolve{
		
		public char [][] maze;
		public boolean [][] visited;
		
		public int height;
		public int width;
		
		public int startRow;
		public int startColumn;
		
		public int endRow;
		public int endColumn;
		
		public MazeSolve(char [][] maze){
			this.maze = maze;
			visited = new boolean[maze.length][maze[0].length];
			height = maze.length;
			width = maze[0].length;
		}
		
		public int solve(){
			
			int res = recursiveMaze(startRow, startColumn);
			return res;
		}
		
		private int recursiveMaze(int row,int column){
			
			if((row == 0 || column == 0) && maze[row][column] == ' ')
			return 1;
			
			
			if(maze[row][column] == 'x' || visited[row][column]){
				return 0;
			}
			
			int res = 0;
			visited[row][column] = true;
			
			if(row != 0){
				res += recursiveMaze(row-1, column);
				
			}
			if(row != height-1){
				res += recursiveMaze(row+1, column);
				
			}
			if(column != 0){
				res += recursiveMaze(row, column-1);
				
			}
			if(column != width- 1){
				res += recursiveMaze(row, column+1);
				
			}
			visited[row][column] = false;
			return res;
		}
		
	}

}