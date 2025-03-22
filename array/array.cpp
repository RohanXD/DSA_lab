#include<iostream>
using namespace std;

void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter Element Number " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Array Input Complete." << endl;
}
void displayArray(const int arr[], int n) {
    cout << "All the Elements Entered In the Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertElement(int arr[], int &n, int pos, int element) {
    if(pos < 1 || pos > n + 1) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = element;
    n++;
}
void reverse(int arr[],int &n){
	for(int i=n-1;i=0;i--)
	{
		cout << arr[i];
	}
	cout <<endl << "Reversed Array.";
}
int main() 
{
    int n, pos, element;
    cout << "Enter Length of Array: ";
    cin >> n;
    int arr[n];
    inputArray(arr, n);
    displayArray(arr, n);
    cout << "Enter the Position you want to Enter the Element: ";
    cin >> pos;
    cout << "Enter the Element: ";
    cin >> element;
    insertElement(arr, n, pos, element);
    displayArray(arr, n);
    reverse(arr,n);

    return 0;

}

