#include <iostream>
using namespace std;
class Point{
    private:
    int x,y;

    public:
    //constructor
    Point():x(10),y(20){

    }
    Point(int x,int y):x(x),y(y){
        
    }
    //gettersetter
    void setx(int a){
        x = a;
    }
    int getx(){
       return x;
    }
    void sety(int b){
        y = b;
    }
    int gety(){
       return  y;
    }
    
    //display
    void display(){
        cout<<"x= "<<x<<"\n"<<"y= "<<y<<endl;
    }
};

int main(){
    Point p;
    p.display();
    Point p1(30,40);
    p1.display();
    Point p3;
    p3.setx(50);
    p3.sety(60);
    p3.display();
    cout<<"X= "<<p3.getx()<<"\n"<<"Y= "<<p3.gety()<<endl;
    
    return 0;
}