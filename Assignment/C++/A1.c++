#include <iostream>
using namespace std;

class Student{
    private:
    int rollno,marks1,marks2,marks3;

    public:
    void accept_info(){
        cout<<"Roll no: ";
        cin>>rollno;
        cout<<"Marks1: ";
        cin>>marks1;
        cout<<"Marks2: ";
        cin>>marks2;
        cout<<"Marks3: ";
        cin>>marks3;
    }
    void display_info(){
        int total;
        float percentage;
        char grade;
        total=marks1 + marks2 + marks3;
        cout<<"total = "<<total<<endl;
        percentage= (total /300.0f)*100.0f;
        cout<<"percentage = "<<percentage<<endl;
        if(percentage>70)
            cout<<"first class with distinction"<<endl;
        else
            cout<<"with distinction"<<endl;
    }
};

int main(){
    Student s;
    s.accept_info();
    s.display_info();
    return 0;
}