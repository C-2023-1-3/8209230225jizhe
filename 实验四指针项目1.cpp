#include <iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
	
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	if (l1 > l2) {
		return -1;

	}


	
		  for (int i = 0;i < l2 - l1;i++)
	{

	   for (int j = 0;j < l1;j++)
	    {
			if (s1[j] == s2[j + i] && j == (l1-1)) 
		    {
			return i;
			
		     }
			if(s1[j]!=s2[j+i]) 
		    {
			
			break;
		     }
	
	     }
		  
  
	}	return -1; 
}
int main() {
	const int size = 999;
	char l1[size], l2[size];
	cout << "Enter the first string:";
	cin.getline(l1, size);
	cout << "Enter the second string:";
	cin.getline(l2, size);
	cout << "indexOf(¡°" << l1 << "¡±, ¡°" << l2 << "¡±) is" << indexof(l1, l2);
	return 0;

}