#include <iostream>
using namespace std;

class Student {
	private:
		string name;
		char sex;
		string registration;
		int age;
		int year;
	
	public:
		Student();
		string getname();
		void setname(string name);
		
		char getsex();
		void setsex(char sex);
		
		string getregistration();
		void setregistration(string registration);
		
		int getage();
		void setage(int age);
		
		int getyear();
		void setyear (int year);
};


Student::Student () {
	name = "";
	sex = '\0';
	registration = "";
	age = 0;
	year = 0;
	
}

string Student::getname() {
	return this->name;
}

void Student::setname(string name) {
	this->name = name;
}

int Student::getage() {
	return this->age;
}

void Student::setage(int age){
	this->age = age;
}

string registration::getregistration () {
	return this->registration;
}

void registration::setregistration (string registration) {
	this->registration = registration;
}

int main () {
	Student s1;
	s1.setname("Pedro");
	s1.setage(19);
	s1.setregistration("2908");
	s1.setsex('M');
	s1.setyear(2006);
	
	cout << s1.getname() << endl;
	return 0;
}

