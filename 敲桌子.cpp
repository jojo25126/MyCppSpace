//从1开始数到数字100， 如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出。
#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 101; i++)
	{
		if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0)
		{
			cout << "敲桌子" << " ";
		}
		else
		{
			cout << i << " ";
		}
	}

	system("pause");
	return 0;
}