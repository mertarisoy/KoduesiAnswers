import java.util.Scanner;

public class Main {
	public static void main(String [] args){
		
		Scanner scan = new Scanner(System.in);
		
		int t = scan.nextInt();
		while(t-- != 0){
			int n = scan.nextInt();
		
			String star = "";
			String space = "";
			
			for(int i = 0; i <n;i++){
				star+= '*';
			}
			
			for(int i = 0; i< n;i++){
				System.out.println(star + space + space +star);
				star = star.substring(1);
				space += " ";
			}
			

			for(int i = 0; i< n;i++){
				
				star += '*';
				space = space.substring(1);
				System.out.println(star + space + space +star);
			}
			
		}
	}
}