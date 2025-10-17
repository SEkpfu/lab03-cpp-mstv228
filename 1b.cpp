#include <iostream>
using namespace std;
int main()
{
	double x = 0;
	do
	{
		cout << x << endl;
		cout << log(x + 1) * sin(x) << endl;
		x += 0.5;
	} while (x <= 5);


}