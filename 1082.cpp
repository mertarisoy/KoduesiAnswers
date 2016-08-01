import java.util.Scanner;


public class Main {

	public static boolean isPal(String sentence){
	    
	    int j = sentence.length()-1;
	    int i = 0;
	    sentence = sentence.toLowerCase();
	    while(i <= j){
	            
	         if(!Character.isLetter(sentence.charAt(i))){
	        	 i++;
	        	 continue;
	         }
	         if(!Character.isLetter(sentence.charAt(j))){
	        	 j--;
	        	 continue;
	         }
	                 
	    if(sentence.charAt(i) != sentence.charAt(j))
	    return false;
	    else{
	    	i++;
	    	j--;
	    }
	    }
	    return true;
	}
	
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		int test;
		String sentence;
		
		
		test = scan.nextInt();
		sentence = scan.nextLine();
		for(int i = 0; i < test;i++){
			
			boolean pal = false;
			sentence = scan.nextLine();
			pal = isPal(sentence);
			if(pal)
				System.out.println("Yes");
			else
				System.out.println("No");
				
		}
		
		
	}

}