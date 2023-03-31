#include<stdio.h>
int main(){
    int marathi = 75;
    int english = 84;
    int history = 89;
    int maths = 95;
    int science = 82;
    float total_marks,percentage;
    
    total_marks = marathi+english+history+maths+science;
    percentage = (total_marks/500.00)*100;

    printf("Total Marks= %.2f\n",total_marks);
    printf("percentage= %.2f%%",percentage);

    return 0;

}