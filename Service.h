#pragma once
#include "Weather.h"


using namespace std;

class Service
{
public: 
	virtual Weather getWeather(std::string s) = 0;
	virtual ~Service() {};
};
