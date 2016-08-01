import java.util.Scanner;

public class Main {
	public static void main(String [] args){
		
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		while(t-- != 0){
			int n = scan.nextInt();
			
			boolean isStar = false;
			String star = "";
			String space = "";
			
			for(int i = 0; i < n;i++){
				star += "*";
				space += " ";
			}
			
			for(int i = 0; i  < 8; i++){
				for(int k = 0; k < n;k++){
					for(int j = 0; j < 8;j++){
						if(isStar){
							System.out.print(star);
						}
						else{
							System.out.print(space);
						}
						isStar = !isStar;
					}
					System.out.println();
				}
				isStar = !isStar;			
			}
		}
		
	}
}