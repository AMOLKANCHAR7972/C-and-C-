#include<stdio.h>
int main(){
    char ch;
    int as,uc,lc;
    

    printf("Enter the character");
    scanf("%*c%c",&ch);
    as = ch;
    uc = as - 32;
    lc = as + 32;
    if(uc >= 65 && uc<=90){
        printf("Converting to uppercase");
    }
    else if(lc >=97 && lc <=122){
        printf("converting to lowercase");
    }

    return 0;  
}