#pragma once
#include "Color.h"
#include <string>

class Car
{
private:
	
	std::string mBrand;
	std::string mModel;
	float mAge;
	float mKilometers;
	float mCost;
	Color mColor;
	
public:

	Car();
	Car(std::string brand, std::string model, float age, float kilometers, float cost);
	~Car();

	std::string GetBrand();
	std::string GetModel();
	float GetAge();
	float GetMiles();
	float GetCost();

	void Roll();
	void ChangeColor();



};

