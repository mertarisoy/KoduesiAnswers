import java.util.Scanner;
public class Main {
	
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		
		String [] digits = {"O","I","II","III","IV","V","VI","VII","VIII","IX"};
		while(t-- != 0){
			
			String n = scan.next();
			for(char c:n.toCharArray())
				System.out.print(digits[c-'0'] + " ");
			System.out.println();
		}

	}
}