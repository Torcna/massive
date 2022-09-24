#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	const int N = 10;
	int r = 0, l = 0, loc_len = 0, max_len = 0, index = 0, c = 0, z = 0, flag = 0;
	int a[N];
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		a[i] = rand() % 2;
	}
	for (int i = 0; i < N; i++)
	{
		printf_s("%d", a[i]);
	}

	while (r < N)
	{
		loc_len = 0;
		flag = 0;
		while (a[r] == 1)
		{
			r++;
			loc_len++;
		}
		loc_len++;
		r++;
		while (a[r] == 1)
		{
			if ((flag == 0) and (a[r - 1] == 0))
			{
				l = r;
				flag++;
			}
			r++;
			loc_len++;
		}
		if (loc_len > max_len)
		{
			max_len = loc_len;
			index = l;
		}
		if (flag == 0)
		{
			l++;
		}
		if (r < N)
		{
			r = l;
		}
		else
		{
			break;
		}
	}
	cout << "   " << index;
	return 0;
}