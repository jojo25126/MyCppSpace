#include <iostream>
using namespace std;

int main()
{
	int a = 100;
	do {
		int i = a % 10;
		int j = a % 100 / 10;
		int k = a / 100;
		if (a = (i * i * i + j * j * j + k * k * k))
		{
			cout << a << "是水仙花数" << endl;
		}
		a++;
	} while (a <= 1000);

	system("pause");
	return 0;

}