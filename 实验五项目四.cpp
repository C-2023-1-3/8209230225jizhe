#include <iostream>
using namespace std;
class Student {
public:

	int grade;
	int id;
	void set() {
		cout << "please enter id" << endl;
		cin >> id;
		cout << "please enter grade" << endl;
		cin >> grade;

	}
};
void max(int arr[5][2]) {
	int* p = arr[0] + 1;
	for (int i = 1;i <= 4;i++)
	{

		if (*p < *(arr[i] + 1)) {
			p = arr[i] + 1;
		}


	}
	cout << *(p - 1) << endl;


}
int main()
{

	Student s1;
	s1.set();
	Student s2;
	s2.set();
	Student s3;
	s3.set();
	Student s4;
	s4.set();
	Student s5;
	s5.set();
	int student[5][2]{ {s1.id,s1.grade}, {s2.id,s2.grade}, {s3.id,s3.grade}, {s4.id,s4.grade}, {s5.id,s5.grade} };
	max(student);

	return 0;
}