#include <iostream>
using namespace std;
class Complexnumber{
    private:
    int real,imaginary;

    public:
    //constructor
    Complexnumber():real(10),imaginary(20){

    }
    Complexnumber(int real,int imaginary):real(real),imaginary(imaginary){
        
    }
    //gettersetter
    void setreal(int a){
        real = a;
    }
    int getreal(){
       return real;
    }
    void setimaginary(int b){
        imaginary = b;
    }
    int getimaginary(){
       return  imaginary;
    }
    
    //display
    void display(){
        cout<<"real= "<<real<<"\n"<<"imaginary= "<<imaginary<<endl;
    }
};

int main(){
    Complexnumber c;
    c.display();
    Complexnumber c1(30,40);
    c1.display();
    Complexnumber c3;
    c3.setreal(50);
    c3.setimaginary(60);
    c3.display();
    cout<<"Real= "<<c3.getreal()<<"\n"<<"Imaginary= "<<c3.getimaginary()<<endl;
    
    return 0;
}