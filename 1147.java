import java.util.Scanner;


public class Main{
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		
		while(t-- != 0){
			
			
			int n = scan.nextInt();
			int stars = n*2-1;
			int spaces = 0;
			
			for(int i = 0; i < n;i++){
				
				for(int j = 0; j < spaces;j++)
					System.out.print(" ");
				
				for(int j = 0; j < stars;j++)
					System.out.print("*");
				
				for(int j = 0; j < spaces;j++)
					System.out.print(" ");
				
				System.out.println();
				stars -= 2;
				spaces++;
			}
			
			stars += 4;
			spaces-=2;
			
			for(int i = 0; i < n-1;i++){
				
				for(int j = 0; j < spaces;j++)
					System.out.print(" ");
				
				for(int j = 0; j < stars;j++)
					System.out.print("*");
				
				for(int j = 0; j < spaces;j++)
					System.out.print(" ");
				
				System.out.println();
				stars += 2;
				spaces--;
			}
			
		
		}
	}

}