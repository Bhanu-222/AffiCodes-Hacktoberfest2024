#include <iostream>
using namespace std;

class student{
public:
	int marks;
	int id_num;
	string name;
};

int main(){
	student x1; //object 1 in general we use dot "." operators
	x1.id_num = 1001;
	x1.marks = 99;
	x1.name= "Jonas";
	cout<<x1.id_num<<" "<<x1.marks<<" "<<x1.name<<endl;
	
	student x2; //object 2
	x2.id_num = 1002;
	x2.marks = 95;
	x2.name= "Martha";
	cout<<x1.id_num<<" "<<x1.marks<<" "<<x1.name<<endl;
	
	//object 3 using arrow operator (As pointer variable)
	
	student *noah = new student(); 
	noah->id_num = 1003;
	noah->marks = 90;
	cout<<noah->id_num<<" "<<noah->marks<<endl;
	return 0;
}
