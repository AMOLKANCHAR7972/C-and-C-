#include<stdio.h>
int main(){
    int n,j=1;
    char ch;
    printf("Enter char :");
    scanf("%c",&ch);
    printf("Enter no of next character to print :");
    scanf("%d",&n);
while(j<=n){
  ch=ch+1;
  if(ch=='z' || ch=='Z') {
   printf("Reached maximum limit\n");
   j=n+1;
  }
  else{
  printf("%c   ",ch);
  j++;
 }
}
 return 0;
}