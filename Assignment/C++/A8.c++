#include<iostream> 
using namespace std;  
class Date{
    int day; 
    int month; 
    int year; 
   public: 
     Date(void):day(0),month(0),year(0){

     }   
     Date(int day,int month,int year):day(day),month(month),year(year){

    } 
    void accept_record(void){
        cout<<"Enter Date of Birth"<<endl;
        cout<<"Day : "; 
        cin>>this->day; 
        cout<<"Month : "; 
        cin>>this->month; 
        cout<<"Year : "; 
        cin>>this->year;   
    }
    void print_record(void){
         cout<<"Dob:"<<this->day<<" / "<<this->month<<" / "<<this->year<<endl;    
    }
}; 

class Employee{
    private: 
    string name; 
    int id;  
    Date dob;  

    public: 
    Employee() : name(""),id(0){

    }
    Employee(string name,int id,Date dob):name(name),id(id),dob(dob){
    
    }

    void accept_record(void){
        cout<<"Name :";
        cin>>this->name;
        cout<<"id :";
        cin>>this->id;
        this->dob.accept_record();
    } 
    
    void print_record(void){
        cout<<"Name : "<<this->name<<endl;
        cout<<"id : "<<this->id<<endl; 
        this->dob.print_record(); 
    }

}; 

int main(){
    Employee e; 
    e.accept_record();
    e.print_record(); 
    return 0;
}