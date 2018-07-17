#ifndef _ARRAY_H
#define _ARRAY_H

#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <iterator>
class pClass
{


private:
	char n;
	int vecSize;
	int vecValue;
	std::vector<int> myVec;

public:
	void myVectorOptions();
	std::vector<int>  myVectorRandom();
	std::vector<int>  myVectorCustom();
	void myVectorDebug();
	void myVectorOrdered();

	//~myVectorVal();
};









#endif