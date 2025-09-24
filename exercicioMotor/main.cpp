#include <iostream>
#include "Motor.h"
using namespace std;

int main() {
	Motor m1;
	Motor m2;
	m1.fillMotor();
	m1.printMotor();
	m2.fillMotor();
	m2.printMotor();
	
	if (m1.getPotentia() > m2.getPotentia()) {
		cout << "M1 has higher potentia" << endl;
	}
	else {
		cout << "M2 has higher potentia" << endl;
	}
	return 0;
}
