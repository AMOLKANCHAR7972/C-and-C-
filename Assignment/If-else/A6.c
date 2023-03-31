#include<stdio.h>
int main(){
    char ch;

    printf("enter the  chracter->");
    scanf("%c",&ch);

    if(ch >= 65 && ch <= 90){
        printf("Charcter is Uppercase");
    }
    else {
        printf("Character is Lowercase");
    }
    
    return 0;
}