#include <iostream>
using namespace std;

int main() {
	const int n = 10;
	int m = 0;
	int c,num;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >>a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0) 
		{
			a[i] = 1;
			c = 0;
			for (int j = 0; j < n; j++)
			{
				if (a[j] == 1)
				{
					c += 1;
					if (c > m)
					{
						m = c;
						num = i;
					}
				}
				else 
				{
					c = 0;
				}
			}
			a[i] = 0;
		}
	}
	cout <<" max lenght "<< m <<" index "<< num+1;
}