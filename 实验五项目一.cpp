#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:             // ���ݳ�ԱΪ���õ�
		int hour;
	int minute;
	int sec;
public:
	void fun() {
		cout << "please enter the hour" << endl;
		cin >>hour;
		cout << "please enter the minute" << endl;
		cin >> minute;
		cout << "please enter the sec" << endl;
		cin >> sec;

		
		cout << hour << ":" << minute << ":" << sec << endl;

	}
};
int main()
{
	Time tl;//����t1ΪTime�����
	
	tl.fun();
	
	return 0;
}
