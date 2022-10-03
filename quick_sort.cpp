#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int start, int end)
{
    int p = arr[end];
    int i = start - 1;
    for(int j=start; j<end; j++)
    {
        if(arr[j]<=p)
        {
            ++i;        //counting for the correct position of pivot
            swap(arr[i], arr[j]);   //keeping smaller elements before pivot since 'i' will represent pivot position
        }
    }
    swap(arr[end], arr[i+1]);   //correct position of pivot
    return (i+1);               //returning the pivot position
}

void quick_sort(int arr[], int start, int end)
{
    if(start<end)
    { 
    int p = partition(arr, start, end);     //getting position of pivot and dividing smaller and greater elements

    quick_sort(arr, start, p-1); //smaller than pivot
    quick_sort(arr, p+1, end);   //greater than pivot
    }
}

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    quick_sort(arr, 0, n-1);
    
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
