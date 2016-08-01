import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		
		scan.nextLine();
		while(t-- != 0){
			
			String s = scan.nextLine();
			String [] lst = s.split("[ ]+");
			
			Arrays.sort(lst);
			
			for(String w:lst)
				System.out.print(w + " ");
			
			System.out.println();
		}

	}

}