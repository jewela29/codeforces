#include<iostream>
using namespace std;

int main()
{
	int n, x;
	int c;
	cin >> n;
	c = n / 5;
	if (n % 5 > 0)
	{
		c++;
	}
	cout << c;
}
