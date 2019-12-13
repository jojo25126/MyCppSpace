#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int NUM;
	cin >> NUM;
	
	while (num != NUM)
	{
		 if (num > NUM)
		{
			cout<< "你猜的数小了";
			cin >> NUM;
		}
		else
		{
			cout << "你猜的数大了";
			cin >> NUM;
		}
		
	}
	if (num = NUM)
			cout << "恭喜你,答对了" << endl;
	system("pause");
		return 0;
}
