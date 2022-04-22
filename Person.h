#pragma once
#include <vector>
#include "Car.h"
#include <string>

class Person
{
private:
	
	std::string mFirstName;
	std::string mLastName;
	std::string mBirthday;
	std::vector<Car> mCar;
	int mMoney;
	std::string mGender;

public:

	Person();
	Person(std::string firstName, std::string lastName, std::string birthday, int money, std::string gender);
	~Person();

	std::string GetFirstName();
	std::string GetLastName();
	std::string GetBirthday();
	int GetMoney();
	std::string GetGender();
	
	void Introduce(Car car);
	void Buy();
	void Sell();
	void Roll();
	void Paint();
};

