//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include"student.h" //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout <<"name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value()
{
    cout << "please enter num" << endl;
    cin >>num;
    cout << "please enter name" << endl;
    cin >> name;
    cout << "please enter sex" << endl;
    cin >> sex;

}
