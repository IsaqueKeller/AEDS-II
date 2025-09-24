#include <iostream>
#include "Motor.h"
#include <string>
using namespace std;

Motor::Motor(){
	type = "";
	potentia = 0;
	consumption = 0;
}

Motor::Motor(Motor & other) {
	this->type = type;
	this->potentia = potentia;
	this->consumption = consumption;
}

void Motor::fillMotor() {
	cout << "Type:";
	cin >> type;
	cout << "Potentia:";
	cin >> potentia;
	cout << "Consumption:";
	cin >> consumption;
}

void Motor::printMotor() {
	cout << endl;
	cout << this->type << endl;
	cout << this->potentia << endl;
	cout << this->consumption << endl;
}

string Motor::getType(){
	return this->type;
}

void Motor::setType(string type) {
	this->type = type;
}

float Motor::getPotentia() {
	return this->potentia;
}

void Motor::setPotentia(float potentia) {
	this->potentia = potentia;
}

float Motor::getConsumption() {
	return this->consumption;
}

void Motor::setConsumption(float consumption) {
	this->consumption = consumption;
}
