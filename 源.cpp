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
			cout<< "��µ���С��";
			cin >> NUM;
		}
		else
		{
			cout << "��µ�������";
			cin >> NUM;
		}
		
	}
	if (num = NUM)
			cout << "��ϲ��,�����" << endl;
	system("pause");
		return 0;
}