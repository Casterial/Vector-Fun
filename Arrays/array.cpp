#include "array.h"


std::vector<int> pClass::myVectorRandom(std::vector<int> myVec)
{
	std::cout << "How many values will be in this vector?\n";
	std::cin >> vecSize;
	for (int i = 0; i <= vecSize; i++)
	{
		vecValue = rand() % vecSize + 1; 
		myVec.push_back(vecValue);
	}
	myVectorDebug();
	return myVec;
}
std::vector<int> pClass::myVectorCustom(std::vector<int> myVec)
{
	std::cout << "How many values do you expect?\n";
	std::cin >> vecSize;
	std::cout << "Enter your numbers into your vector\n";
	for (int i = 0; i <= vecSize; i++)
	{
		std::cin >> vecValue;
		myVec.push_back(vecValue);
	}
	std::cout << "Content of your vector\n";

	myVectorDebug();

	return myVec;

}

void pClass::myVectorDebug()
{
	for (std::vector<int>::const_iterator i = myVec.begin(); i != myVec.end(); ++i)
	{
		std::cout << *i;
	}
}

void pClass::myVectorOptions()
{
	std::cout << "1. Insert your own values\n";
	std::cout << "2. Randomize your values\n 3. 0 to exit\n";
	std::cin >> n;
	switch (n)
	{
		case '1':
			myVectorCustom(myVec);
			break;
		case '2':
			myVectorRandom(myVec);
			break;
		default:
			std::cout << "invalid input\n";
	}
}