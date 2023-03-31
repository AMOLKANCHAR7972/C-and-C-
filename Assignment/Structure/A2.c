#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct emp{
   int id,salary;
   char name[20];
}e[100];

//To accept employee details
void accept(int n){
   printf("\nEnter employee id: ");
   scanf("%d",&e[n].id);
   printf("\nEnter employee name: ");
   scanf("%s",e[n].name);
   printf("\nEnter employee salary: ");
   scanf("%d",&e[n].salary);
}

//To display employee details
void display(int n){
   printf("\nEmployee id:\t\t%d",e[n].id);
   printf("\nName:\t\t\t%s",e[n].name);
   printf("\nSalary:\t\t\t%d\n",e[n].salary);
}
void Search1(struct emp e[],int size);
void Search2(struct emp e[],int size);
void Gsalary(struct emp e[],int n);
void Maxsalary(struct emp e[200],int n);
void main(){
   int c,n,i; //c=choice , n=number of employees , Id=employee id
    printf("Enter the number of employees:");
                    scanf("%d",&n);
                    for(i=0;i<n;i++){
         		        accept(i);
                   }
                    
   do{
      printf("\n1.Search by name\n2.Search by id\n3.Display all \n4.Display all employees having salary>25000\n5.Display employee having maximum salary\n6.exit\nEnter your  choice: ");
      scanf("%d",&c);
      switch(c){
      	case 1:
                Search1(e,n);
                break;
        case 2:
                Search2(e,n);
                break;
        case 3:
                printf("\nDetails of employees\n");
         	        for(i=0;i<n;i++){
         		 	    display(i);
                   } 
                break;
        case 4:
                Gsalary(e,n);
                break;
        
        case 5:
                Maxsalary(e,n);
                break;
      }
   }while(c!=6);
}

void Search1(struct emp e[],int size){
	char name[20];
	int i,flag=0,searchBy=1;
	
	if(searchBy==1){
	printf("\n Enter the name of the student:- ");
	scanf("%s",name);
	}

	for(i=0;i<size;i++){
		if(strcmp(e[i].name,name)==0){
		flag=1;
		break;
		}
	} 
 
	if(flag==1){
	printf("\n We have found this result:- \n ");
	printf("\nid= %d \nname= %s \nsalary= %d \n",e[i].id,e[i].name,e[i].salary);
	}
	else
	printf("\n We haven't found any record \n");
}

void Search2(struct emp e[],int size){
	int i,flag=0,id,searchBy=1;
	  
	if(searchBy==1){
	printf("\n Enter id of the employee:- ");
	scanf("%d",&id);
	} 
	
	for(i=0;i<size;i++){
		if(e[i].id==id){
		flag=1;
		break;
		}
	} 
 
	if(flag==1){
	printf("\n We have found this result:- \n "); 
	printf("\nid= %d \nname= %s \nsalary= %d \n",e[i].id,e[i].name,e[i].salary);
	}
	else
	printf("\n We haven't found any record \n");
}

void Gsalary(struct emp e[],int n){
	int i,sal=25000;
 
	for(i=0;i<n;i++){
		if(e[i].salary>sal){
            printf("\nid= %d \nname= %s \nsalary= %d \n",e[i].id,e[i].name,e[i].salary);
		}
	}
}

void Maxsalary(struct emp e[],int n){
	int i;
	int maxsalary=e[0].salary;
	for(i=0;i<n;i++){
		if(e[i].salary>maxsalary){  
		maxsalary=e[i].salary;
		break;
		}
    }
     printf("\nHighest salary employee details\n:");
     for(i=0;i<n;i++){
        if(e[i].salary==maxsalary)
        printf("\nid= %d \nname= %s \nsalary= %d \n",e[i].id,e[i].name,e[i].salary);
    }
}
	