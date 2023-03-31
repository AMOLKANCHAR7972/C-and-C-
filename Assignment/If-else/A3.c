#include <stdio.h>
int main(){
    int basic_salary;
    float tax;

    printf("enter the salary->");
    scanf("%d",&basic_salary);

    if(basic_salary <= 150000){
        tax=0;
        printf("tax=%.2f",tax);
    }
    else if(basic_salary>150000 && basic_salary<=300000){
        tax=(20.00/100.0)*basic_salary;
        printf("tax=%.2f",tax);
    }
    else if(basic_salary>300000){
        tax=(30.00/100.0)*basic_salary;
        printf("tax=%.2f",tax);
    }

    return 0;
}