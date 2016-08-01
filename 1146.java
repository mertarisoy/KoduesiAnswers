import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;


public class Main {
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		
		while(t-- != 0){
			
			int n = scan.nextInt();
	
			ArrayList<Integer> numbers = new ArrayList<Integer>();
			for(int i =0; i < n;i++){
				numbers.add(reverse(scan.nextInt()));
			}
			
			int max = Collections.max(numbers);
			int min = Collections.min(numbers);
			
			
			System.out.println(Math.abs(max-min));
		}
		
		
	}
	public static int reverse(int n){
		int res = 0;
		while(n != 0){
			res = res*10 + n%10;
			n /= 10;
		}
		return res;
	}

}