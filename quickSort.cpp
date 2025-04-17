#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> &arr) {
    cout << endl;

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];  // Choose the last element as pivot
    int index = low;     // Index to place elements smaller than pivot

    for (int i = low; i < high; i++) {
        if (arr[i] < pivot) {
            swap(arr[index], arr[i]);
            index++;
        }
    }

    // Place pivot at its correct position
    swap(arr[index], arr[high]);
    return index;
}


void quickSort(vector<int> &arr, int low, int high) {

    if (low < high) {

        int pi = partition(arr, low, high); // partition index

        quickSort(arr, low, pi - 1);  // left sub-array
        quickSort(arr, pi + 1, high); // right sub-array

    }

}

int main() {

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int element;
        cout << "Enter arr[" << i << "]: ";
        cin >> element;
        arr.push_back(element);
    }

    cout << "Original Array" << endl;
    printArray(arr);

    quickSort(arr , 0 , n - 1);

    cout << "Sorted Array" << endl;
    printArray(arr);

    return 0;
}
