import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
      
        Scanner scan = new Scanner(System.in);
        
        int t = scan.nextInt();
        
        while(t-- != 0){
             
                int n = scan.nextInt();
                ArrayList<Integer> positive = new ArrayList<Integer>(n);
                ArrayList<Integer> negative = new ArrayList<Integer>(n);
                
                while(n-- != 0){
                    int number = scan.nextInt();
                    if(number < 0){
                        negative.add(number);
                    }
                    else{
                        positive.add(number);
                    }

                } 
                Collections.sort(negative);
                Collections.sort(positive);
                
                int cnt = 0;
                for(int i = 0; i < positive.size()-1;i++){
                    for(int j = i+1 ; j < positive.size(); j++){
                        int res = Collections.binarySearch(negative, -positive.get(i)-positive.get(j));
                        if(res >= 0){
                            //System.out.println("(" + positive.get(i) + "," + positive.get(j) + "," + negative.get(res)  + ")");
                            cnt++;
                        }    
                    }
                }
                
                for(int i = 0; i < negative.size()-1;i++){
                    for(int j = i+1 ; j < negative.size(); j++){
                        int res = Collections.binarySearch(positive,-negative.get(i)-negative.get(j));
                        if(res >= 0){
                            //System.out.println("(" + negative.get(i) + "," + negative.get(j) + "," + positive.get(res)  + ")");
                            cnt++;
                        }    
                    }
                }
                
                System.out.println(cnt);     
        }
        
        
    }
}