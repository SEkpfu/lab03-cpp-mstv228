#include <iostream>
using namespace std;
int main() 
{
	int number;
	int x = 1,nk=0;
	while (x!=0) 
	{	
		int x1;
		cin >> x1;
		if (x1 == 0) break;
		if (x1 > x) 
		{
			x = x1;
			nk = 0;
		}
		if (x1 == x) nk += 1;
		if (x1 < x) x = x ;
	}
	cout << nk;
}