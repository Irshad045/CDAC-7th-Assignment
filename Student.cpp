#include<iostream>
class Student{
	public:
		int roll_no;
		char name[10];
		char grade;
		
		void set_grade(int marks){
			if(marks>60){
				grade='a';
			}
			else if(marks>40){
				grade='b';
			}
			else{
				grade='f';
			}
		}
};
int main(){
	Student s1;
	Student s2;
	return 0;
}
