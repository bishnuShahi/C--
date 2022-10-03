#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
   
    int n, q;
    cout<<"Enter number of variable-sized arrays & no. of queries: ";
    cin>>n>>q;

    int* ptr[n], s[n], index[n], pos[n], ind[n]; ;
    
    for(int i = 0; i<n; i++)
    {
        cout<<"\nEnter size: ";
        cin>>s[i];
        cout<<"\nCreating new array: ";
        ptr[i] = new int(s[i]);  
        
        for(int j = 0; j<s[i]; j++)
        {
            cout<<"\nEnter value: ";
            cin>>*(ptr[i]+j);    
        }      
    }
    
    for(int i = 0; i<q; i++)
    {
        cin>>ind[i]>>pos[i];           
    }
    
    for(int i = 0; i<q; i++)
    {
        cout<< *(ptr[ind[i]]+pos[i]) <<endl;
    }  
      
    return 0;
}
