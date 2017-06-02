#include <iostream>
//#include "account.h"
using namespace std;


int main()
{
	int choi;
	cout << "////////////欢迎使用银行账户管理程序////////////" << endl;
	cout << "请创建一个银行账户，按1继续，按0退出[$]" << endl;
	cin >> choi;
	if (choi)
	{
		int id0;
		float balance0, rate0;
		cout << "创建银行帐号：" << endl;	cin >> id0;
		svacct acc;
	}
	while (1) 
	{
		cout << endl;
		cout << "功能菜单：" << endl;
		cout << "1、显示账户信息" << endl;
		cout << "2、存款" << endl;
		cout << "3、取款" << endl;
		cout << "4、结算利息" << endl;
		cout << "0、退出程序" << endl;
		cout << endl;
		cout << "请输入选择[$]" << endl;
		cin >> choi;
		switch (1) { show(); }
		break;
	}
	return 0;
}
