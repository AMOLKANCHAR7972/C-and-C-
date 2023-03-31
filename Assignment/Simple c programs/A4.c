#include<stdio.h>
int main(){
float basic_salary=50000;
float Net_salary;
float PF,Tax,HRA,DA,deduction;

printf("baasic_salary=%.2f\n",basic_salary);

PF= (2/100.0)* basic_salary;
Tax= (3/100.0)* basic_salary;
HRA= (5/100.0)* basic_salary;
DA= (8/100.0)* basic_salary;
deduction = PF+Tax+HRA+DA;
printf("deduction = %.2f\n",deduction);

Net_salary = basic_salary - deduction;

printf("Net Salary = %.2f",Net_salary);

return 0;



}