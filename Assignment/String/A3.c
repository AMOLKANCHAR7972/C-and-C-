#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[10][30],*ch;
    int i,n,choice,result;

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
   
    while(1){
        printf("menu:\n");
        printf("1.Length\n2.Copy\n3.Concatenation\n4.Compare\n5.Reverse\n6.Uppercase\n7.Lowercase\n8.exit\n");
        printf("enter the choice-> ");
        scanf("%d",&choice);

        switch (choice){
        case 1: 
            for(i=0; i<n; i++){
            printf("length of str %d= %d ",i,strlen(str[i]));
            }
            break;
        
        case 2:
            strcpy(str[1],str[0]);
            puts(str[1]);
            break;

        case 3:
            strcat(str[0],str[1]);
            puts(str[0]);
            break;

        case 4:
            result=strcmp(str[0],str[1]);
            printf("strcmp(str[0],str[1])= %d\n",result);
            break;

        case 5:
            strrev(str[0]);
            puts(str[0]);
            break;

        case 6:
            ch = str[0];
            if(isupper(*ch)){
                printf("Entered strings 1st character is in uppercase\n");

            }
            else{
                printf("Entered string 1st character is not in uppercase\n");
            }
            break; 

        case 7:
            ch = str[1];
            if(islower(*ch)){
                printf("Entered strings 1st character is in lowercase\n");
            }
            else{
                printf("Entered strings 1st character is not in lowercase\n");
            }
            break;

        case 8:
            exit(0);    
        }
    }
    return 0;
}