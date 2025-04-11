#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int pass=1;

    while(pass<=n-1)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i]= arr[i+1];
                arr[i+1]=temp;
            }
        }
        pass=pass+1; 
    }

}

int main()
{
    int n;

    cout<<"Enter the array size"<<endl;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Enter a["<<i<<"]:";
        cin>>arr[i];
    }
    
    cout<<endl;

    cout<<"Array is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    bubbleSort(arr, n);

     cout<<"Sorted Array is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
     
    cout<<endl;
    return 0;
}