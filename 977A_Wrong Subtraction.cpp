#include<iostream>
#include<string>
using namespace std;

int main()
{
	int k, n, i;
	int x;
	cin >> n >> k;
	x = n;
	for (i = 0; i<k; i++)
	{
		
		if (x % 10 == 0)
		{
			x = x / 10;			
		}
		else
		{
			x = x - 1;
		
		}
	}
	cout << x;
	return 0;
}