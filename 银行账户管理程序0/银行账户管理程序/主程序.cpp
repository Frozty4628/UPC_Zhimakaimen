#include <iostream>
//#include "account.h"
using namespace std;


int main()
{
	int choi;
	cout << "////////////��ӭʹ�������˻��������////////////" << endl;
	cout << "�봴��һ�������˻�����1��������0�˳�[$]" << endl;
	cin >> choi;
	if (choi)
	{
		int id0;
		float balance0, rate0;
		cout << "���������ʺţ�" << endl;	cin >> id0;
		svacct acc;
	}
	while (1) 
	{
		cout << endl;
		cout << "���ܲ˵���" << endl;
		cout << "1����ʾ�˻���Ϣ" << endl;
		cout << "2�����" << endl;
		cout << "3��ȡ��" << endl;
		cout << "4��������Ϣ" << endl;
		cout << "0���˳�����" << endl;
		cout << endl;
		cout << "������ѡ��[$]" << endl;
		cin >> choi;
		switch (1) { show(); }
		break;
	}
	return 0;
}
