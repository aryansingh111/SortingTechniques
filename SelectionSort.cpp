#include <iostream>
using namespace std;

class Sorting
{
public:
    void selectionSort(int arr[], int n)
    {
        for (int i = 0; i<n-1; i++)
        {
            int minIndex = i;

            for(int j = i+1; j<n; j++)
            {
                if (arr[j] < arr[minIndex])
                {
                    minIndex = j;
                }
            }

            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
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
};

int main()
{
    Sorting sort;
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
    sort.printArray(arr, n);
    sort.selectionSort(arr,n);
    cout<<"Sorted Array: ";
    sort.printArray(arr, n);
    return 0;
}