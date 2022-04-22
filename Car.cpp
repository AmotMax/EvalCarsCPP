#include "Car.h"
#include <iostream>


using namespace std;

Car::Car()
{
	mBrand = "Default";
	mModel = "Default";
	mAge = 1;
	mKilometers = 0;
	mCost = 0;

}

Car::Car(string brand, string model, float age, float kilometers, float cost)
{
	mBrand = brand;
	mModel = model;
	mAge = age;
	mKilometers = kilometers;
	mCost = cost;
}

Car::~Car()
{

}

string Car::GetBrand()
{
	return mBrand;
}

string Car::GetModel()
{
	return mModel;
}

float Car::GetAge()
{
	return mAge;
}

float Car::GetMiles()
{
	return mKilometers;
}

float Car::GetCost()
{
	return mCost;
}

void Car::Roll()
{
}

void Car::ChangeColor()
{
}
