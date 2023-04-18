//write a program to perform linear and binary search using switch case.
#include <iostream>
using namespace std;

// Linear Search function
int linearSearch(int arr[], int n, int x) {
    for(int i=0; i<n; i++) {
        if(arr[i] == x)
            return i;
    }
    return -1;
}

// Binary Search function
int binarySearch(int arr[], int l, int r, int x) {
    while(l <= r) {
        int mid = l + (r-l)/2;
        if(arr[mid] == x)
            return mid;
        else if(arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 5, 7, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x, choice, result;

    cout << "Enter the element you want to search: ";
    cin >> x;

    cout << "Choose a search algorithm: " << endl;
    cout << "1. Linear Search" << endl;
    cout << "2. Binary Search" << endl;
    cin >> choice;

    switch(choice) {
        case 1:
            result = linearSearch(arr, n, x);
            break;
        case 2:
            result = binarySearch(arr, 0, n-1, x);
            break;
        default:
            cout << "Invalid choice" << endl;
            return 0;
    }

    if(result == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element found at index " <<

