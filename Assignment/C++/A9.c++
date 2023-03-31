// ABC Organization
#include <iostream>
#include <string>
using namespace std;
class Employee{
	private:
	int id;
	string Name;
	double Basic_salary,HRA,Medical=1000,PF,PT,Net_salary,Gross_salary;
	

	public:
	void accept_record(){
	cout<<"id";
	cin>>id;
	cout<<"Name";
	cin>>Name;
	cout<<"Basic salary";
	cin>>Basic_salary;
	}
	
	void display_record(){
	HRA = (50.00/100.0)*Basic_salary;
	PF = (12.00/100.0)*Basic_salary;
	PT = 200;
	cout<<"HRA= "<<HRA<<" PF= "<<PF<<" PT= "<<PT<<endl;
	cout<<"id= "<<id<<" Name= "<<Name<<" Basic salary= "<<Basic_salary<<endl;
	Gross_salary = Basic_salary + HRA + Medical;
	Net_salary = Gross_salary - (PT + PF);
	cout<<"Gross salary= "<<Gross_salary<<"\n"<<"Net Salary= "<<Net_salary<<endl;
	}

};
	
int main(){
	Employee e;
	e.accept_record();
	e.display_record();
	return 0;
}