#include <iostream>
using namespace std;
int main(){
	char a[] = "aye aye captain";
    int length = 0;
	for (int i = 0; a[i] != '\0'; i++) 
	{
        length++;
    }
    for (int i = 0; i < length / 2; i++) 
	{
        char temp = a[i];
        a[i] = a[length - i - 1];
        a[length - i - 1] = temp;
    }

    cout <<"Reversed string: "<< a << endl;

    return 0;
}  
