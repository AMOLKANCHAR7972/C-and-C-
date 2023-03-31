#include<stdio.h>
int main(){
    char ch;

    printf("enter the lowercase chracter->");
    scanf("%*c%c",&ch);

    if(ch=='a' ||  ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("Charcter is Vowel");
    }
    else{
        printf("Character is Consonant");
    }

    return 0;
}