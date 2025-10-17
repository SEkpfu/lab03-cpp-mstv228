#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	const double e{ 0.00001 };
	double summ{ 0 };
	for (int i{ 1 }, z{ 1 }; abs(z*1.0/(i+2.0))>e ; i += 1, z = -z)
	{
		
		summ += z * 1.0 / (i*2 - 1);
	}
	cout << summ ;
}