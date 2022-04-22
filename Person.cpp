#include "Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
	mFirstName = "Default";
	mLastName = "Default";
	mBirthday = "Default";
	mMoney = 0;
	mGender = "Default";

}

Person::Person(std::string firstName, std::string lastName, std::string birthday, int money, string gender)
{
	mFirstName = firstName;
	mLastName = lastName;
	mBirthday = birthday;
	mMoney = money;
	mGender = gender;
}



Person::~Person()
{

}

string Person::GetFirstName()
{
	return mFirstName;
}

string Person::GetLastName()
{
	return mLastName;
}

std::string Person::GetBirthday()
{
	return mBirthday;
}

int Person::GetMoney()
{
	return mMoney;
}

string Person::GetGender()
{
	return mGender;
}

void Person::Introduce(Car car)
{
	cout << "L'humain " << mFirstName << " vit desormais parmi nous " << endl
		<< mFirstName << " " << mLastName << " est ne(e) le " << mBirthday << " et est " << mGender << endl
		<< mFirstName << " a " << mMoney << " euros et une voiture, une magnifique " << car.GetBrand() << " " << car.GetModel() << endl;



}



void Person::Buy()
{
}

void Person::Sell()
{
}

void Person::Roll()
{
}

void Person::Paint()
{
}
