#include <iostream>
using namespace std;


 void InsertionSort(int arr[], int n)
 {
    for(int i=1; i<n; i++)
    {
        int key = arr[i];

        int j = i-1;

        while(j>=0 && key<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

 }

void printArray(int arr[], int n)
    {
        cout << endl;

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }



int main()
{
    
    int n;

    cout << "Enter the array size" << endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter a[" << i << "]:";
        cin >> arr[i];
    }

    cout<<endl;

     cout<<"Original Array: ";
    printArray(arr, n);
    InsertionSort(arr,n);
    cout<<"Sorted Array: ";
    printArray(arr, n);

    return 0;
}