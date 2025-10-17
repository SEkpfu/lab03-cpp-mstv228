#include <iostream>
using namespace std;
int main() 
{
	int x;
	cin >> x;
	int n;
	cin >> n;
	double r1=0,r2=0;

	for (int i = 1; i <= n; ++i)
	{
		r1 = cos(x+r1); //a
		r2 = sqrt(x + r2); //b
	}

	cout<<r1<<"   "<<r2;
}
