#include <iostream>

using namespace std;

int main()
{
    int arr[6], n;
    cout<<"Input: \n";

    for(int i=0; i<6; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"\nNumber of times left shift: ";
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        int ini = arr[0];
        
        for(int j=0; j<6; j++)
        {
            arr[j + 1] = arr[j];
        }
        arr[5] = ini;
    }
    
    cout<<"\nOutput: \n";
    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}