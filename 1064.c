#include <stdio.h>
#include <math.h>

int main(){
      
    int test;
    float v1,v2,v3,t1,t2,t3,x1,x2,x3;
    float dist,res; 
    
    scanf("%d", &test);
    while(test--){
                  
                  scanf("%f%f%f%f%f%f", &t1,&v1,&t2,&v2,&t3,&v3);
                  x1 = v1 * t1;
                  x2 = v2 * t2;
                  x3 = v3 * t3;
                  
                  dist = (x1+x2+x3) / 2.0f;
                  
                  if(dist <= x1)
                  res =  dist/v1;
                  else if(dist <= x1+x2)
                  res = (dist-x1)/v2 + t1;
                  else
                  res = (dist-x1-x2)/v3 + t1+t2;
                  
                  printf("%.2f\n", res);
                              
    }
    
     return 0;
     }  
                
