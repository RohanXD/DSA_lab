#include <iostream>
using namespace std;

int main()
{
	char a[100];
	cout << "Enter your String:";
	cin >> a;
	int length=0;
	for (int i=0;a[i]!='\0';i++)
	{
		length++;
	}
	cout << "Total length of string:"<< length ;
	
	return 0;
}
