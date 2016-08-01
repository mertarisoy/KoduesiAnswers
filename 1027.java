import java.util.*;
public class Main {

	
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String a = "";
		String b = "";
		
		int test = scan.nextInt();
		for (int i = 0 ; i < test ; i++){
			
			String word = scan.next();
			for (int j = 0 ; j < word.length() ; j++){
				if (word.charAt(j) == 'a' || word.charAt(j) == 'e' || word.charAt(j) == 'i' || word.charAt(j) == 'o' || word.charAt(j) == 'u' || word.charAt(j) == 'y' ||
					word.charAt(j) == 'A' || word.charAt(j) == 'E' || word.charAt(j) == 'I' || word.charAt(j) == 'O' || word.charAt(j) == 'U' || word.charAt(j) == 'Y')
					a += word.charAt(j);
				else
					b += word.charAt(j);
			}
			System.out.println(a + b);
			a = "";
			b = "";
		}
		
		

	}

}
