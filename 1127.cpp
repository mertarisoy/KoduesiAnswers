import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		int test = scan.nextInt();
		while(test-- != 0){
			int t = scan.nextInt();
			int h = scan.nextInt();
			int m = scan.nextInt();
			
			

			boolean [] time = new boolean[1440];
			
			for(int i = 0; i < 1440;i++){
				time[i] = false;
			}
			
			for(int i = 6*60; i < 10*60;i+=5){
				time[i] = true;
			}
			
			for(int i = 10*60; i < 15*60;i+=12){
				time[i] = true;
			}
			
			for(int i = 15*60; i < 23*60;i+=7){
				time[i] = true;
			}
			
			for(int i = 23*60; i < 1440;i+=20){
				time[i] = true;
			}
			
			for(int i = 0; i < 6*60;i+=20){
				time[i] = true;
			}
			
			
			boolean [] temp = new boolean[t];
			
			for(int i = 0; i <t;i++)
				temp[i] = time[1440-t-1];
			
			for(int i = 1440-1; i >= t;i--){
				time[i] = time[i-t];
			}
			
			for(int i = 0; i<t;i++)
				time[i] = temp[i];
		
				
			int i = h*60+m;
			while(true){
				
				if(time[i])
					break;
				
				i++;
				if(i == 1440)
					i = 0;
			}
			
			int res = i-(h*60+m);
			if(res < 0)
				res+= 1440;
			
			System.out.println(res);
			
			
			

		}
		
	}
	

}