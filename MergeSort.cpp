#include <iostream>
#include <vector>
using namespace std;


void printArray(vector<int> &arr, int n)
{
     cout << endl;

        for (int i = 0; i < arr.size() ; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
}

void merge(vector<int> &arr, int low, int mid ,int high)
{
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left<=mid)
    {
       temp.push_back(arr[left]);
       left++;
    }

    while (right<=high)
    {
       temp.push_back(arr[right]);
       right++;
    }
    
    for(int i=low; i<=high; i++)
    {
            arr[i]= temp[i-low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low>=high)
    {
        return;
    }

    int mid = (low+high)/2;

    mergeSort(arr, low, mid); // Left Array
    mergeSort(arr, mid+1, high); // Right Array

    merge(arr,low,mid,high);
}

int main()
{
    int n;

    cout << "Enter the array size" << endl;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int element;
        cout << "Enter a[" << i << "]:";
        cin >> element;
        arr.push_back(element);
    }

    cout<<"Original Array: ";
    printArray(arr, n);

    mergeSort(arr, 0, n-1);

    cout<<"Sorted Array: ";
    printArray(arr, n);

}