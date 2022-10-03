#include <iostream>
#include <algorithm>

using namespace std;

class stack
{
    int val;
    stack* top;

    stack(int data, stack head)
    {
        if(top == size)
        {
            cout<<"Overflow"
            return;
        }
        val = data;

    }
};

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    

    return 0;
}