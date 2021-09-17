//empid, employee name, salary, year of joining and calculate_tax function
#include<iostream>
using namespace std;
 class employee{
 	int emp_id;
 	char emp_name;
 	float emp_net_sal;
 	float emp_basic;
 	int emp_yoj;
 	float emp_it;
 	float emp_in;
 	float ctf;
 		public:
		void get_emp_details();
		float find_net_salary(float basic,float in, float it);
		void show_emp_details();
 };
 void employee::get_emp_details()
 {
 	cout<<"enter employee id"<<endl;
	cin>>emp_id;
	cout<<"enter employee name"<<endl;  
	cin>>emp_name;
	cout<<"enter the basic of employee"<<endl;
	cin>>emp_basic;
	cout<<"enter the year of joining"<<endl;
	cin>>emp_yoj;
		cout<<"enter the da of employee"<<endl;
	cin>>emp_in;
	cout<<"enter the it of employee"<<endl;
	cin>>emp_it;
 }
 float employee :: find_net_salary(float basic,float in,float it)
 {
 	return(basic+in)-it;
 }
 void employee::show_emp_details()
 {
 	cout<<">>>>>>>> Details of  Employee <<<<<<<<<";
	cout<<"\nEmployee Name      :  "<<emp_name;
	cout<<"\nEmployee id        :  "<<emp_id;
	cout<<"\nBasic salary       :  "<<emp_basic;
	cout<<"\nEmployee In        :  "<<emp_in;
	cout<<"\nIncome Tax         :  "<<emp_it;
	cout<<"\nNet Salary         :  "<<find_net_salary(emp_basic, emp_in, emp_it);
 }
 int main()
{
    employee irsh;
    irsh.get_emp_details();
    irsh.show_emp_details();
    return 0;
}
