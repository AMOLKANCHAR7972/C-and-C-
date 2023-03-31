#include <iostream>
#include <string>
using namespace std;
class Person{
    private:
    string name,city;
    int age;

    public:
    //constructor
    Person(){
        this->name = "Ram";
        this->age = 24;
        this->city = "Nashik";
        
    }
    Person(string name,int age,string city){
        this->name = name;
        this->age = age;
        this->city = city;
        
    }
    //gettersetter
    void setname(string n){
        name = n;
    }
    string getname(){
        return name ;
    }
    void setage(int a){
        age = a;
    }
    int getage(){
        return age;
    }
    void setcity(string n){
        city = n;
    }
    string getcity(){
        return city ;
    }
    
    //display
    void display(){
        cout<<"name= "<<name<<endl;
        cout<<"age= "<<age<<endl;
        cout<<"city= "<<city<<endl;
    }
};

int main(){
    Person p;
    p.display();
    Person p1("Raju",40,"Jalgaon");
    p1.display();
    Person p3;
    p3.setname("Chiku");
    p3.setage(12);
    p3.setcity("Vashi");
    p3.display();
    cout<<"Name= "<<p3.getname()<<endl;
    cout<<"Age= "<<p3.getage()<<endl;;
    cout<<"City= "<<p3.getcity()<<endl;
    
}