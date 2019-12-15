#include <iostream>
using namespace std;
int main()
{
	int a[3][3] = { 100,100,100,90,90,90,80,80,80 };
	for (int i = 0; i < 3; i++)
	{
		int sum=0;
		for (int j = 0; j < 3; j++)
		{
			sum += a[i][j];
		}
		cout << "第" << i << "位同学的成绩是" << sum << endl;
	}

	system("pause");
	return 0;
}