import java.text.DecimalFormat;
import java.util.Scanner;


public class Main {

	public static void main(String[] args) {
		
		DecimalFormat df = new DecimalFormat("0.00");
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		
		while(t-- != 0){
			
			int n = scan.nextInt();
			
			double sum = 0;
			double total = 1;
			for(int i = 2; i <= n;i++){
				sum += 1.0/i;
				total = total + sum + 1.0;
			}
			
			System.out.println(df.format(total).replace(",","."));
			
		}
	}

}