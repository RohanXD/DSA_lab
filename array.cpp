#include<iostream>
using namespace std;

void displayArray(const int arr[], int n) {
    cout <<endl <<"All the Elements In the Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout <<endl <<"Enter Element Number " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout <<endl << "Array Input Complete." << endl;
    displayArray(arr,n);
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
    displayArray(arr,n);
}
void delElement(int arr[], int &n, int pos) {
    if (pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    cout <<endl <<"Element deleted and array repositioned." << endl;
    displayArray(arr,n);
}

void deleteElementByValue(int arr[], int &n, int value) {
    int newSize = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != value) {
            arr[newSize++] = arr[i];
        }
    }
    if (newSize == n) {
        cout <<endl << "Element " << value << " not found in the array." << endl;
    } else {
        cout <<endl <<"All occurrences of " << value << " have been deleted and array repositioned." << endl;
    }
    n = newSize;
    displayArray(arr,n);
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
    int n, pos, element,delpos,choice;
    cout << "Program Started"<<endl;
	cout <<endl << "Enter Length of Array: ";
    cin >> n;
    int arr[n];
    inputArray(arr, n);
    cout <<endl <<"Enter the Position you want to Enter the Element: ";
    cin >> pos;
    cout <<endl << "Enter the Element: ";
    cin >> element;
    insertElement(arr, n, pos, element);
    cout <<endl << "Which way you want to perform Deletion \n 1.By Position \n 2.By Element \n Enter: ";
    cin >> choice;
	if (choice == 1){
		cout <<endl << "Enter the Position you want to Delete the Element: ";
    	cin >> delpos;
    	delElement(arr,n,delpos);
	}
	else if (choice ==2){
		cout <<endl << "Enter the Element you want to Delete: ";
    	cin >> delpos;
		deleteElementByValue(arr,n,delpos);
	}
    return 0;

}

