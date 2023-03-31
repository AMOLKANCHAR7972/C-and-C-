#include <iostream>
using namespace std;
class Date{
    private:
    int date,month,year;

    public:
    //constructor
    Date():date(11),month(03),year(23){ 

    }
    Date(int date,int month,int year):date(date),month(month),year(year){
    
    }
    
    //display
    void display(){
        cout<<"date/month/year= "<<date<<"/"<<month<<"/"<<year<<endl;
    }
};

int main(){
    Date d;
    d.display();
    Date d1(12,03,23);
    d1.display();
    
    return 0;
}