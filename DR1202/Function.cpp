#include <stdio.h>
#include <iostream>
#include <time.h>

using namespace std;

void cArr(char*arr, int r)
{
	srand(time(NULL));
	for (int i = 0; i < r; i++)
	{
		arr[i] = 65 + rand() % 57;
		if (arr[i] > 90 && arr[i] < 97)
		{
			i = i - 1;
		}
	}
	arr[r] = '\0';
}