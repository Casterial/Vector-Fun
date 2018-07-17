#include "array.h"


std::vector<int> pClass::myVectorRandom()
{
	std::cout << "How many values will be in this vector?\n";
	std::cin >> vecSize;
	for (int i = 0; i < vecSize; i++)
	{
		vecValue = rand() % vecSize + 1; 
		myVec.push_back(vecValue);
	}
	return myVec;
}
std::vector<int> pClass::myVectorCustom()
{
	std::cout << "How many values do you expect?\n";
	std::cin >> vecSize;
	std::cout << "Enter your numbers into your vector\n";
	for (int i = 0; i < vecSize; i++)
	{
		std::cin >> vecValue;
		myVec.push_back(vecValue);
	}
	return myVec;

}

void pClass::myVectorDebug()
{
	std::cout << "Your vector holds these values: \n";
	std::cout << "< ";
	std::copy(myVec.begin(), myVec.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << ">";
}

void pClass::myVectorOptions()
{
	std::cout << "1. Insert random values\n";
	std::cout << "2. Insert your own values\n3. 0 to exit\n";
	std::cin >> n;
	switch (n)
	{
		case '1':
			myVectorRandom();
			break;
		case '2':
			myVectorCustom();
			break;
		default:
			std::cout << "invalid input\n";
	}
}