#include <iostream>
#include <ctime>
using namespace std;

int binaryNext(int array[],int size){
    
    for(int i = 0; i < size; i++){
            if(array[i] == 0){
                        array[i] =1;
                        for(int j = i -1; j >= 0; j--){
                                array[j] = 0;
                        }
                        return 0;
            }
    }
    return 1;
}

int isCompleted(int array[],int size){
    
    for(int i = 1; i < size; i++){
            if(array[i] == 1)
            return 0;
    }
    return 1;
}

void reset(int array[],int reset[]){
     
     for(int i = 1; i < 10;i++){
             array[i] = reset[i];
     }
}
int main(){
    
    int test;
    string temp;
    cin >> test;
    while(test--){
            
            int res=0,minRes = 10;  
            string sets[9];
            int required[10],required_copy[10];
            int binary[10];
            
            for(int i = 0; i < 9;i++){
                    sets[i] = "";
            }
            temp = "";
            
            for(int i = 0; i < 10;i++){
                    required[i] = 0;
                    required_copy[i] = 0;
                    binary[i] = 0;
            }
            binary[0] = 1;
            
            for(int i = 0; i < 9;i++){
                    cin >> temp;
                    sets[i] = temp;
                    for(int j = 0; j < temp.length();j++){
                            required[temp[j]-48] = 1;
                            required_copy[temp[j]-48] = 1;
                    }
            }
            for(int i = 1;i < 512;i++){
                    
                    for(int j = 0;j < 9;j++){
                            if(binary[j]){
                                   temp = sets[j];
                                   for(int k=0;k < temp.length();k++){
                                           required[temp[k]-48] = 0;
                                   }
                            }
                    }
                    if(isCompleted(required,10)){
                         for(int j = 0; j < 9;j++){
                                 if(binary[j])
                                 res++;
                         }
                         
                         if(res < minRes){
                                minRes = res;
                         }
                    }
                    reset(required,required_copy);
                    binaryNext(binary,10);
                    res = 0;
            }
            
            cout << minRes << endl;
            res = 0;
            minRes = 0;
         
    }
    return 0;
}
//bruteforce in binary.