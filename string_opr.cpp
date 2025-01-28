#include <iostream>
#include <string>
using namespace std;

void stringlength(string a)
{
	int i,len=0;
	while(a[i]!='\0')
    {
        len++;
        i++;
    }
    cout <<"Lenth of String: "<<len<<endl;
}

void stringcopy(string a)
{
	string b=a;
	cout <<endl <<"Copied String: " << a;
}

void stringcancat(string a, string c)
{
	int i,j=0;
	while (a[i]!='\0'){i++;}
	a+=' ';
	while (c[j]!='\0')
	{
		a+=c[j];
		j++;
	}
	cout<<endl <<"Added: " <<a;
}
int main()
{
    string a,c;
    cout <<"Enter a String: " ;
    cin >> a;
    stringlength(a);
    stringcopy(a);
    cout <<endl <<"Enter another String: " << c;
    cin >> c;
    stringcancat(a,c);
    return 0;
    
}
