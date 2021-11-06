#include <iostream>
using namespace std;

float getMax(const float arr[], int len)
{
	float max = FLT_MIN;
	for (int i = 0; i < len; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

int getMax(const int arr[], int len)
{
	int max = INT_MIN;
	for (int i = 0; i < len; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

int main()
{
	cout << "202134-365627 ±è¹ÎÈñ" << endl;

	int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 };
	float data_flt[10] = { 10.1, 23.2, 5, 9.4, 22.5, 48.6, 12.7, 10.8, 55.9, 31 };

	cout << "µ¥ÀÌÅÍ : ";
	for (int i = 0; i < 10; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl << endl;
	cout << "ÃÖ´ñ°ª = " << getMax(data, 10) << endl;
	cout << "flt ÃÖ´ñ°ª = " << getMax(data_flt, 10) << endl;
}
