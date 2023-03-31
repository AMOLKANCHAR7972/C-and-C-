//cpp app for bankaccount handling
#include <iostream>
#include <string>
using namespace std;
class BankAccount{
	private:
	int acct_no;
	string customer_name;
	double balance;

	public:
	BankAccount():acct_no(0),customer_name(" "),balance(0){

	}
	BankAccount(int acct_no,string customer_name,double balance):acct_no(acct_no),customer_name(customer_name),balance(balance){
	
	}

	void withdraw(double amt){
	cout<<"balance - withdraw ammount= "<<balance << " - " <<amt<<"= ";
	balance -= amt;
	cout<<balance<<endl;
	}
	
	void deposit(double amt){
	cout<<"balance + deposit ammount= "<<balance << " + " <<amt<<"= ";
	balance += amt;
	cout<<balance<<endl;
	}

};

int main(){
	BankAccount b(789465,"Rhagu Rajan",50000);
	b.withdraw(2000);
	b.deposit(1200);

	return 0;
}