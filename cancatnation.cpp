#include <iostream>
#include <string>
using namespace std;

int main()
{
    char a[] = "What";
    char b[] = "is";
    char d[] = "this?";
    string c = string(a) + string(b)+ string(d);

    cout << "Concatenated string: " << c << endl;

    return 0;
}

