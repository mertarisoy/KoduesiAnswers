import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


public class Main {
    public static void main(String [] args) throws IOException{
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer tokenizer = new StringTokenizer(reader.readLine());
        
        int t = Integer.parseInt(tokenizer.nextToken());
        while(t-- != 0){
            
            tokenizer = new StringTokenizer(reader.readLine());
            while(!tokenizer.hasMoreTokens()){
                
            }
            String num = tokenizer.nextToken();
            int numI = Integer.parseInt(num);
            int S = 0;
            if(numI < 10 ||numI > 99){
                System.out.println(0);
                continue;
            }
            StringBuilder sb= new StringBuilder(num);
            String numR = sb.reverse().toString();
            
            for(int i = 0; i< 10 ;i++){
                S += Integer.parseInt(num + Integer.toString(i) + numR);
            }
            
            S += Integer.parseInt(num + numR);
            
            System.out.println(S);
            
        }
    }
}