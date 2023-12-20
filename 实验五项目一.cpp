#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:             // 数据成员为公用的
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
	Time tl;//定义t1为Time类对象
	
	tl.fun();
	
	return 0;
}
