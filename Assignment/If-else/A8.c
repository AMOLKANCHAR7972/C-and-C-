#include<stdio.h>
int main(){
    //(i)maximum
    
    int num1 = 100;
    int num2 = 200; 
    int num3 = 300; 

    if( num1 > num2) {
          if(num1 > num3){
              printf("num1 is greatest"); 
          }
          else {
              printf("num3 is greatest"); 
          }  
    } 
    else {
            if( num2 > num3 ) {
                printf("num2 is greatest"); 
            }
            else {
                printf("num3 is greatest"); 
            }
    }
    
    printf("\n");

    //(ii)minimum
    
    int num4 = 100;
    int num5 = 200; 
    int num6 = 300; 

    if( num4 < num5){
          if(num5 < num6){
              printf("num4 is smallest"); 
          }
          else {
              printf("num6 is smallest"); 
          }  
    } 
    else {
            if( num5 < num6 ) {
                printf("num5 is smallest"); 
            }
            else {
                printf("num6 is smallest"); 
            }
    }
    
    return 0;
}
