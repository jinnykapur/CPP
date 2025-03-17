#include <iostream>
#include <array>

using namespace std;

int insertKelement(int arr[], int n, int element, int position) {
    if (position < 0 || position > n) {
        cout << "Invalid position!" << endl;
        return -1;
    }

    for (int i = n; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;

    cout << "Output:" << endl;
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

int main()
{
    int n,element,position;
    cout<<"Enter the no. of elements of array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "Enter the position to insert the element: ";
    cin >> position;


    cout<<"Enter the element: ";
    cin>>element;

    insertKelement(arr, n, element, position);
    return 0;
}

