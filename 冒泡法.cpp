#include <iostream>
using namespace std;

void bubblesort(int *arr,int len)
{
	
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printsort(int *arr,int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		cout << arr[i]<<" ";
	}
}
int main()
{
	int a[10] = { 5,4,6,8,12,899,1,45,6,81 };
	bubblesort(a, 10);
	printsort(a, 10);

	system("pause");
	return 0;
}