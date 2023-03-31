#include <iostream>
using namespace std;
class Date{
    private:
    int dd,mm,yy;

    public:
    //constructor
    Date():dd(11),mm(03),yy(23){     
    
    }
    Date(int dd,int mm,int yy):dd(dd),mm(mm),yy(yy){
    
    }
    //gettersetter
    void setdd(int d){
        dd = d;
    }
    int getdd(){
       return dd;
    }
    void setmm(int m){
        mm = m;
    }
    int getmm(){
       return  mm;
    }
    void setyy(int y){
        yy;
    }
    int getyy(){
        return yy;
    }
    
    //display
    void display(){
        cout<<"date/month/year= "<<dd<<"/"<<mm<<"/"<<yy<<endl;
    }
};

int main(){
    Date d;
    d.display();
    Date d1(12,03,23);
    d1.display();
    Date d3;
    d3.setdd(13);
    d3.setmm(03);
    d3.setyy(23);
    d3.display();
    cout<<"Date/Month/Year= "<<d3.getdd()<<"/"<<d3.getmm()<<"/"<<d3.getyy()<<endl;
    
    return 0;
}