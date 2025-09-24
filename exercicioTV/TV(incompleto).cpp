#include <iostream>
#include <string>
#include "TV.h"
using namespace std;

TV::TV() {
	brand = "";
	height = 0;
	resolution = "";
	price = 0;
}

TV::TV(TV & other) {
	this->brand = other.brand;
	this->height = other.height;
	this->resolution = other.resolution;
	this->price = other.price;
}

TV::TV(string brand , float height , string resolution , float price) {
	this->brand = brand;
	this->height = height;
	this->resolution = resolution;
	this->price = price;
}

string TV::getBrand() {
	return this->brand;
}

void TV::setBrand(string brand) {
	this->brand = brand;
}

float TV::getHeight() {
	return this->height;
}

void TV::setHeight(float height) {
	this->height = height;
}

string TV::getResolution() {
	return this->resolution;
}

void TV::setResolution(string resolution) {
	this->resolution = resolution;
}

