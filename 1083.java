import java.util.Stack;
import java.util.Scanner;
public class Main {

	public static int isBalanced(String openSet,String closeSet,String exp) {
		
		char ch; 
		int open; 
		int close; 
		int n = exp.length();
		
		Stack<Integer>stack = new Stack<Integer>();
		
		for(int i = 0; i < n; i++) {
			ch = exp.charAt(i);
			open = openSet.indexOf(ch);
		if(open != -1) 
			stack.push(open); 
		else{
			close = closeSet.indexOf(ch);
			if(close != -1) {
				if(stack.isEmpty()) 
					return 1;
				else { 
					open = stack.pop(); 
					if(open != close) 
						return 2;
					}
				}
			}
		} 
		
		if(!stack.isEmpty())
			return 3;
		
		return 0; 
		} 


	public static void main(String args[]) {
		Scanner scan= new Scanner(System.in);
		
		int test,res;
		String openSet,closeSet,exp;
		test = scan.nextInt();
		for(int i = 0;i < test; i++){
				
			openSet = scan.next();
			closeSet = scan.next();
			exp = scan.next();
			
			res = isBalanced(openSet,closeSet,exp);
			
			if(res == 1)
				System.out.println("Missing open symbol");
			else if(res == 2)
				System.out.println("Mismatch of open/close symbols");
			else if(res == 3)
				System.out.println("Missing close symbol");
			else
				System.out.println("Balanced");
		}
	}
}