#include "array.h"

pClass vec;
int main()
{
	srand(time(NULL));
	vec.myVectorOptions();
	vec.myVectorDebug();
	std::cout << "\n\n";
	std::cout << system("pause");
	return 0;
}