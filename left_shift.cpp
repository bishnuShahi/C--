#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size],temp[size], n;
    cout<<"Input: \n";

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
   
    cout<<"\nNumber of times left shift: ";
    cin>>n;
    int j=0;
    for(int i=n; i<=size; i++)
    {
        temp[j] = arr[i];
        j++;
    }
    j=0;
    for(int i=size-n; i<size; i++)
    {
        temp[i] = arr[j];   
        j++;
    }
    
    for(int i=0; i<size; i++)
    {
        arr[i] = temp[i];
    }
   
    
   
    cout<<"\nOutput: \n";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}