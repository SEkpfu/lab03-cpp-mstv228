#define _USE_MATH_DEFINES
#include <cmath>

#include <iostream>

using namespace std;
int main()
{
	for (double x = 0; x <= 2.0 * M_PI + M_PI / 6; x += M_PI / 6)
	{
		cout << cos(x) << endl;
	}

}