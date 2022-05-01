#ifndef CLASSES_H
#define CLASSES_h
#include <iostream>
#include <string>

class Property {
public:
	Property() {
		worth = 0;
	}
	Property(int a) {
		worth = a;
		
	}
	double worth=0;
	
	virtual void taxes() {
		std::cout << "bruh";
		
	}
};


class Apartment:public Property
{
public:
	void taxes() {
		double a = this->worth / 1000;
		std::cout << a;
	}
	Apartment(int a):Property(a)
	{
		}
	
	 
	
};


class Car:public Property {
public:
	void taxes() {
		std::cout << this->worth / 200 ;
	}
	Car(int a) : Property(a)
{
}
};


class CountryHouse:public Property {
public:
	void taxes() {
		std::cout << this->worth / 500 ;
		
	}
	CountryHouse(int a) : Property(a)
{
}
};
#endif