#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    cout<<"Array is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int BinarySearch (int arr[], int n, int low, int high, int target)
{
    if(low>high)
    {
        return -1;
    }

    int mid = (low+high)/2;

    if(target == arr[mid])
    {
        return mid;
    }

    else if(target < arr[mid])
    {
        return  BinarySearch(arr, n, low, mid, target);
    }

    else 
    {
         return  BinarySearch(arr, n, mid+1, high, target);
    }
}

int main()
{
    int n;

    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }

    printArray(arr, n);

    int target;

    cout<<"Enter the target element: ";
    cin>>target;

    int index = BinarySearch(arr, n, 0, n-1, target);

    if (index == -1)
    {
        cout<<"Element not found!"<<endl;
    }

    else
    {
        cout<<"Element found at index !"<<index;
    }
    return 0;
}