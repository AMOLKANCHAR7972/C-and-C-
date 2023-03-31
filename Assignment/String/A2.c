#include <stdio.h>
#include <string.h>
int main(){
    char str[10][30];
    int i,n,max,len,c;

    printf("enter the no of strings: ");
    scanf("%d",&n);

    printf("enter the strings: ");
    for(i=0; i<n; i++){
        scanf("%s",&str[i]);
    }
    printf("strings are: ");
    for(i=0; i<n; i++){
        printf("%s ",&str[i]);
    }

    max = strlen(str[0]);
    for(i=0; i<n; i++){
        len = strlen(str[i]);
        if(len > max ){
            c = i;
            max = len;
        }
    }
         printf("\nlongest string= %s",str[c]); 
         return 0;
}