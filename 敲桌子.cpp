//��1��ʼ��������100�� ������ָ�λ����7����������ʮλ����7�����߸�������7�ı��������Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ�����
#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 101; i++)
	{
		if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0)
		{
			cout << "������" << " ";
		}
		else
		{
			cout << i << " ";
		}
	}

	system("pause");
	return 0;
}