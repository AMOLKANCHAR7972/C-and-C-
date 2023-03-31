#include <stdio.h>
struct library_book{
    int id;
    char title[80],publisher[20];
    int cost;
    union u{
        int no_of_copies;
        char month[10];
        int edition;
    }info;

};

int main(){
    struct library_book b[200];
    int n,c,i;
    printf("Enter the number of books:");
    scanf("%d",&n);

    printf("Enter the choice:1.Text book,2.Magazine,3.Refrence book->");
    scanf("%d",&c);

    printf("\n Enter the information of books as follow:-\n");

    switch(c){
        case 1:
                printf("id title\t\t\tpublisher\t\tnoofcopies cost\n");
                for(i=0; i<n; i++){
                    scanf("%d%s%s%d%d",&b[i].id,b[i].title,b[i].publisher,&b[i].info.no_of_copies,&b[i].cost);
                }
                printf("details of Textbook:\n");
                for(i=0; i<n; i++){
                printf("code= 1  id= %d  title= %s  publisher= %s  noofcopies= %d  cost= %d\n", b[i].id, b[i].title, b[i].publisher, b[i].info.no_of_copies, b[i].cost);
                }
                break;
        case 2:
                printf("id title\t\t\tpublisher\t\tmonth cost\n");
                for(i=0; i<n; i++){
                    scanf("%d%s%s%d%d",&b[i].id,b[i].title,b[i].publisher,&b[i].info.month,&b[i].cost);
                }
                printf("details of Magazine:\n");
                for(i=0; i<n; i++){
                printf("code= 2  id= %d  title= %s  publisher= %s  month= %d  cost= %d\n", b[i].id, b[i].title, b[i].publisher, b[i].info.month, b[i].cost);
                }
                break;

        case 3:
                printf("id title\t\t\tpublisher\t\tedition cost\n");
                for(i=0; i<n; i++){
                    scanf("%d%s%s%d%d",&b[i].id,b[i].title,b[i].publisher,&b[i].info.edition,&b[i].cost);
                }
                printf("details of Reference book:\n");
                for(i=0; i<n; i++){
                printf("code= 3  id= %d  title= %s  publisher= %s  edtition= %d  cost= %d\n", b[i].id, b[i].title, b[i].publisher, b[i].info.edition, b[i].cost);
                }
                
    }
    
}

