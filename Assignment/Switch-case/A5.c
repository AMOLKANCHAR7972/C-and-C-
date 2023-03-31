#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3,c,hcf;
    int choice;
    //assume fraction are positive
    printf("Enter the numerator for 1st fraction ->");
    scanf("%d",&x1);
    printf("Enter the denominator for 1st fraction->");
    scanf("%d",&y1);
    printf("Enter the numerator for 2nd fraction->");
    scanf("%d",&x2);
    printf("Enter the denominator 2nd fraction->");
    scanf("%d",&y2);
    
    printf("Enter the choice->1.Addition 2.Subtraction 3.Multiply");
    scanf("%d",&choice);

    switch (choice){
    case 1:
        //numerator
        x3 = ((x1*y2)+(x2*y1));
        //denominator
        y3 = (y1*y2);

        for(c=1;c<=x3 && c<=y3;++c){
            if(x3%c== 0 && y3%c==0){
            hcf = c;
            }
        }
        printf("Addition of Fraction= (%d/%d) + (%d/%d) = (%d/%d)",x1,y1,x2,y2,x3/hcf,y3/hcf);
        break;
    
    case 2:
        //numerator
        x3= ((x1*y2)-(x2*y1));
        //denominator
        y3 = (y1*y2);
        if(x3>0){
        for(c=1;c<=x3 && c<=y3;++c){
            if(x3%c== 0 && y3%c==0){
            hcf = c;
            }
        }
        }
        else if(x3<0){
        for(c=1;c>=x3 && c<=y3;++c){
            if(x3%c== 0 && y3%c==0){
            hcf = c;
            }
        }
        }

        printf("Subtraction of Fraction= (%d/%d) - (%d/%d) = (%d/%d)",x1,y1,x2,y2,x3/hcf,y3/hcf);
        break;

    case 3:
        //numerator
        x3 = (x1*x2);
        //denominator
        y3 = (y1*y2);
         if(x3>0){
        for(c=1;c<=x3 && c<=y3;++c){
            if(x3%c== 0 && y3%c==0){
            hcf = c;
            }
        }
        }
       
        printf("Multiplication of Fraction= (%d/%d) * (%d/%d) = (%d/%d)",x1,y1,x2,y2,x3/hcf,y3/hcf);
        break;

    }

    return 0;
}