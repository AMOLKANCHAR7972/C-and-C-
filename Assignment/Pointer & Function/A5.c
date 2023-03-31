#include <stdio.h>
#include <math.h>
void Tseries();
int main(){
    Tseries();
    return 0;
}

void Tseries(){
    int x,y;
    int fact = 1,num;
    float sum=0;
 
    printf("Enter the value of x in the series: ");
    scanf("%d",&x);
 
    printf("Enter the number of terms in the series: ");
    scanf("%d",&num);
 
    for(y=1;y<num;y++){
        fact = fact*y;
        sum = sum + (pow(x,y)/fact) ;
    }
    sum= sum + 1;
 
    printf("The sum of the Taylor series is: %.2f",sum);
}

