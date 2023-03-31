#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char text[50];
    int i;

    printf("enter the string-> ");
    gets(text);

    for(i=0; i<strlen(text); i++){
        if(text[i]== ' '){
                text[i]= '*';
        }
    }
    puts(text);

    for(i=0; i<strlen(text); i++){
        if(isupper(text[i])){
                text[i]= tolower(text[i]);
        }
        else if(islower(text[i])){
                text[i]= toupper(text[i]);
        }
    }
    puts(text);

    for(i=0; i<strlen(text); i++){
        if(isdigit(text[i])){
                text[i]= '?';
        }
    }
    puts(text);
    return 0;
}