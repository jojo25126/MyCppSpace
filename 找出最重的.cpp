#include <iostream>
using namespace std;
int main()
{
	int arr[5] = { 80,85,90,95,100 };
	int max = arr[0];
	int j = 0;
	for (int i = 1; i <= 4; i++)
	{
		if (max < arr[i]) {
			max = arr[i];
			j = i;
		}
	}
	cout << "��" << j << "ֻ�����ص� Ϊ" << max << endl;
	system("pause");
    return 0;
}