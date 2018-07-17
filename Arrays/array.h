#ifndef _ARRAY_H
#define _ARRAY_H

#include <iostream>
#include <vector>
#include <ctime>
class pClass
{


private:
	char n;
	int vecSize;
	int vecValue;
	std::vector<int> myVec;

public:
	void myVectorOptions();
	std::vector<int>  myVectorRandom(std::vector<int> myVec);
	std::vector<int>  myVectorCustom(std::vector<int> myVec);
	//void myVectorSort();
	void myVectorDebug();

	//~myVectorVal();
};









#endif