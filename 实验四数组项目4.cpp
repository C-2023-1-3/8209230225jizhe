#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{int a = 0;
	for (int i = 0;i < size1;i++) 
	{
		list3[i] = list1[i];
}
	for (int j = size1;j < size1 + size2;j++)
	{
		list3[j] = list2[a];
		a++;
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < size1+size2- 1; j++)
			if (list3[j] > list3[j + 1])
			{
				int m = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = m;
				changed = true;
			}
	} while (changed);

}
int main()
{
	int s1, s2;
	cout << "Enter list1:";
	cin >> s1;
	int* l1 = new int[s1];
	for (int i = 0;i < s1;i++)
	{
		cin >> l1[i];

	}
	cout << "Enter list2:";
	cin >> s2;
	int* l2 = new int[s2 ];
	for (int i = 0;i < s2 ;i++)
	{
		cin >> l2 [i];

	}
	int* l3 = new int[s1 + s2];
	merge(l1, s1, l2, s2, l3);
	for (int i = 0;i < s1 + s2;i++) {
		cout << l3[i]<< ' ';
	}

	
}