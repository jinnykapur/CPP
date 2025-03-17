#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> a1 = {1, 2, 3};
    array<int, 5> a2 = {10, 20, 30};

    // empty() - Checks if the array is empty
    if (a1.empty()) {
        cout << "a1 is empty." << endl;
    } else {
        cout << "a1 is not empty." << endl;
    }

    // fill(value) - Assigns the same value to all elements
    cout << "Filling a1 with value 7:" << endl;
    a1.fill(7);
    for (int i : a1) {
        cout << i << " ";
    }
    cout << endl;

    // swap(otherArray) - Swaps the contents of two arrays
    cout << "Swapping a1 and a2:" << endl;
    a1.swap(a2);

    cout << "Contents of a1 after swap:" << endl;
    for (int i : a1) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Contents of a2 after swap:" << endl;
    for (int i : a2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
