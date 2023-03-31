#include <iostream>
#include <string>
using namespace std;
class Book{
    private:
    string bname,author;
    int id,price;

    public:
    //constructor
    Book():bname("Doglapan"),author("Asneer_Grover"),id(786),price(499){ 

    }
    Book(string bname,string author,int id,int price):bname(bname),author(author),id(id),price(price){
    
    }
    //gettersetter
    void setbname(string n){
        bname = n;
    }
    string getbname(){
        return bname ;
    }
    void setauthor(string a){
        author = a;
    }
    string getauthor(){
        return author;
    }
    void setid(int i){
        id = i;
    }
    int getid(){
        return id ;
    }
    void setprice(int p){
        price = p;
    }
    int getprice(){
        return price ;
    }
    
    //display
    void display(){
        cout<<"bookname= "<<bname<<endl;
        cout<<"author = "<<author<<endl;
        cout<<"id= "<<id<<endl;
        cout<<"price= "<<price<<endl;
    }
};

int main(){
    Book b;
    b.display();
    Book b1("Frontier","Medha_Deshmukh",19,399);
    b1.display();
    Book b3;
    b3.setbname("Think_Like_A_Monk");
    b3.setauthor("Jay_Shetty");
    b3.setid(22);
    b3.setprice(475);
    b3.display();
    cout<<"Bookname= "<<b3.getbname()<<endl;
    cout<<"Author = "<<b3.getauthor()<<endl;
    cout<<"Id= "<<b3.getid()<<endl;
    cout<<"Price= "<<b3.getprice()<<endl;

    return 0;
}