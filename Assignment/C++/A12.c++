#include <iostream>
using namespace std;
class Shape{
    protected:
    float area;
    
    public:
    virtual float calculateArea(void) = 0;
};

class Rectangle : public Shape{
    private:
    int length;
    int breadth;

    public:  
    void acceptRecord(){
        cout<<"Length   :   ";
        cin>>this->length;
        cout<<"Breadth  :   ";
        cin>>this->breadth;
    } 
    float calculateArea(){
       return  this->area = this->length * this->breadth;
    }
};

class Circle : public Shape{
    private:
    int radius;
    public:
    void acceptRecord(){
        cout<<"Radius   :   ";
        cin>>this->radius;
    }
    float calculateArea(){
       return this->area = 3.142f * this->radius * this->radius;
    }
};

class Square : public Shape{
private:
    int side;
public:
    void acceptRecord(){
        cout<<"Side   :   ";
        cin>>this->side;
    }
    float calculateArea(){
       return this->area = this->side * this->side;
    }
};

int main(){
    Rectangle r;
    r.acceptRecord();
    cout<<"Area of Rectangle= "<<r.calculateArea()<<endl;

    Circle c;
    c.acceptRecord();
    cout<<"Area of Circle= "<<c.calculateArea()<<endl;

    Square s;
    s.acceptRecord();
    cout<<"Area of Square= "<<s.calculateArea()<<endl;

    return 0; 
}