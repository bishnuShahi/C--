#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int arr[], int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
              swap(arr[j], arr[j+1]);  
            }
        }
    }
}

int main(){

    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];

    cout<<"Enter "<<size<<" elements: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    bubble_sort(arr, size-1);
   
    cout<<"Sorted array: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}