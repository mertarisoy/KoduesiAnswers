import java.util.Scanner;


public class Main {
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		
		while(t-- != 0){
			
			
			int n = scan.nextInt();
			int m = scan.nextInt();
			
			int cnt = 0;
			for(int i = n; i <= m;i++){
				int sum = sumDiv(i);
				
				if(i == sum){
					cnt++;
					continue;
				}
				
				int secondSum = sumDiv(sum);
				if(secondSum == i && i < sum){
					cnt++;
				}

			}
			
			System.out.println(cnt);
			
			
		
		}
	}
	
	public static int sumDiv(int n){
	    
	    if( n == 1)
	    return 0;
	         
	    int sum = 1;
	    int sqrtN = (int)Math.sqrt(n);
	    for (int i = 2; i  < Math.sqrt(n); i++)
	    {
	        if (n % i == 0){
	              sum += i + n / i;
	              }
	    }  
	    if (sqrtN * sqrtN == n)
	        sum += sqrtN;
	        return sum;
	}  

}