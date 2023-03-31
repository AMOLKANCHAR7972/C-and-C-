#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student {
	int roll_no,math,science,english;
	char name[20];
	float percent;
};
void Search(struct student S[],int n);
void Modify(struct student S[],int n,int roll_no);
void DisplayAll(struct student S[],int n);
void PercentGT(struct student S[],int n);
void MaxPercent(struct student S[],int n);
void main(){
	struct student S[200];
	int i,roll_no,n,choice;
	printf("\n no of students:- ");
	scanf("%d",&n);
	printf("\n Enter the information of students as follow:- ");
	printf("\n Roll No \t Name \t Math \t Sciene \t English \n");
 
	for(i=0;i<n;i++){
	scanf("%d%s%d%d%d",&S[i].roll_no,S[i].name,&S[i].math,&S[i].science,&S[i].english);
	S[i].percent=(S[i].math+S[i].science+S[i].english)/3;
	}

do{
	printf("\n Menu");
	printf("\n 1.Search");
	printf("\n 2.Modify");
	printf("\n 3.Display all students details");
	printf("\n 4.Display all students having percentage greater than 80");
	printf("\n 5.Display student having maximum percentage");
	printf("\n 6.Exit\n");
	printf("\n Enter Your Choice:- ");
	scanf("%d",&choice);

switch(choice){
	case 1:
	        Search(S,n);
	        break;
	case 2:
	        printf("\n Enter roll no to modify the details:- ");
	        scanf("%d",&roll_no);
	        Modify(S,n,roll_no);
	        break; 
	case 3:
	        DisplayAll(S,n);
	        break;
	case 4:
	        PercentGT(S,n);
	        break;
	case 5:
	        MaxPercent(S,n);
	        break;
	case 6:
			exit(0);
  }
}while(choice!=6);
	return 0;
}
//Search Function
void Search(struct student S[],int size){
	char name[20];
	int i,flag=0,roll_no,searchBy;
do{
	printf("\n How do you want to search:- 1.By Roll No\t\t2.By Name \n");
	scanf("%d",&searchBy);
   
	if(searchBy==1){
	printf("\n Enter roll no of the student:- ");
	scanf("%d",&roll_no);
	} 
	else{
	printf("\n Enter the name of the student:- ");
	scanf("%s",name);
	}
}while(searchBy<1 || searchBy>2);

	for(i=0;i<size;i++){
		if(S[i].roll_no==roll_no || strcmp(S[i].name,name)==0){
		flag=1;
		break;
		}
	} 
 
	if(flag==1){
	printf("\n We have found this result:- \n ");
	printf("\n Roll No\t Name \t Maths \t Science\t English \t Percentage\n"); 
	printf("\n %4d \t\t %s \t %3d \t %4d \t\t %4d \t\t %5.2f \n",S[i].roll_no,S[i].name,S[i].math,S[i].science,S[i].english,S[i].percent);
	}
	else
	printf("\n We haven't found any record \n");
}
// Modify Function
void Modify(struct student S[],int n,int roll_no){
	char name[20]; 
	int i,update,newData;
do{
	printf("\n What do you want to update:- 1.Roll NO\n2.Name\n3.Marks of 'Maths'\n4.Marks of 'Science'\n5.Marks of 'English'\n");
	scanf("%d",&update);
	if(update==3 || update==4 || update==5){
	printf("\n Enter new marks:- ");
	scanf("%d",&newData);
	}
	else if(update==1){
	printf("\n Enter new roll no:- ");
	scanf("%d",&newData);
	}
	else if(update==2){
	printf("\n Enter new name:- ");
	scanf("%s",name);
	}
	else{
	printf("\n Please make a valid choice \n"); 
	}
 
}while(update<1 || update>5);

	for(i=0;i<n;i++){
		if(S[i].roll_no==roll_no){
			if(update==1){
			S[i].roll_no=newData;
			break;
			}   
			else if(update==3){
			S[i].math=newData;
			break;
			} 
			else if(update==4){
			S[i].science=newData;
			break;
			} 
			else if(update==5){
			S[i].english=newData;
			break;
			}
			else{
			strcpy(S[i].name,name);
			break; 
			} 
		}
	}
 
	printf("\n Modified details of students are as follows:- \n");
	printf("\n Roll No\t Name \t Maths \t Science\t English \t Percentage\n");
	for(i=0;i<n;i++){ 
	printf("\n %4d \t\t %s \t %3d \t %4d \t\t %4d \t\t %5.2f \n",S[i].roll_no,S[i].name,S[i].math,S[i].science,S[i].english,S[i].percent); 
	}
}
// DisplayAll Function
void DisplayAll(struct student S[],int n){
	int i;
	printf("\n The Information of students is as follow:-\n");
	printf("\n Roll No\t Name \t Maths \t Science\t English \t Percentage\n"); 
 
	for(i=0;i<n;i++)
	printf("\n %4d \t\t %s \t %3d \t %4d \t\t %4d \t\t %5.2f \n",S[i].roll_no,S[i].name,S[i].math,S[i].science,S[i].english,S[i].percent);
}
// PercentGT Function
void PercentGT(struct student S[],int n){
	int i;
	printf("\n The Information of students who scored percentage>80 :-\n");
	printf("\n Roll No\t Name \t Maths \t Science\t English \t Percentage\n"); 
 
	for(i=0;i<n;i++){
		if(S[i].percent>80.00f){
		printf("\n %4d \t\t %s \t %3d \t %4d \t\t %4d \t\t %5.2f \n",S[i].roll_no,S[i].name,S[i].math,S[i].science,S[i].english,S[i].percent);
		}
	}
}
// MaxPercent Function
void MaxPercent(struct student S[],int n){
	int i;
	float maxPercent=S[0].percent;
	for(i=0;i<n;i++){
		if(S[i].percent>maxPercent){  
		maxPercent=S[i].percent;
		break;
		}
	}
	printf("\nHighest percentage student details\n:");
	printf("\n Roll No\t Name \t Maths \t Science\t English \t Percentage\n"); 
    for(i=0;i<n;i++){
        if(S[i].percent==maxPercent)
        printf("\n %4d \t\t %s \t %3d \t %4d \t\t %4d \t\t %5.2f \n",S[i].roll_no,S[i].name,S[i].math,S[i].science,S[i].english,S[i].percent);
        }
	
}
