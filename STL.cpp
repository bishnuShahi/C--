#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>

using namespace std;

void myVector(){
    vector<int> v={10,23,1,4,2};

    sort(v.begin(),v.end()); //O(nlogn)

    
    cout<< v[0] <<endl;

    bool present = binary_search(v.begin(), v.end(), 23); //either present or not
    cout<<present<<endl;

    v.push_back(80);
    v.push_back(80);
    v.push_back(80);
    v.push_back(150);

    vector<int> :: iterator iter1, iter2, i; //iterator
    iter1 = lower_bound(v.begin(), v.end(), 80); //returns the first element greater than or equal to

    iter2 = upper_bound(v.begin(), v.end(), 80);  //returns strictly the greater element

    cout<< *iter1 << " " << *iter2<<endl;
    cout<< iter2-iter1 <<endl; //count no. of times the element appeared 

    //for(i = v.begin(); i < v.end(); i++){
    //    cout<<*i<<" ";
    //}

    for(int x: v){
        cout<<x<<" ";
    }
}

void mySet(){

    set<int> s;     //always gets stored ascending order
    s.insert(10);
    s.insert(30);
    s.insert(2);
    s.insert(-1);
    s.insert(-15);

    for(int x : s){
        cout << x <<" ";
    }
    cout << endl;

    auto iter = s.find(-1);  //auto can automatically detect the datatype, for this case it is iterator of set 's'
        // the iterator tries to find the element and if not found it will be pointing to s.end()

    if(iter == s.end()){
        cout<< "Not found"<<endl;
    }
    else{
        cout << "Present "<< *iter << endl;
    }

    auto it1 = s.lower_bound(-1);
    auto it2 = s.upper_bound(10);   //since 10 is not present in set so it2 points to s.end() i.e 30

    cout<< *it1 << " " << *it2 <<endl;

}

void myMap(){
    
    map<int ,int> a;

    a[1] = 100;
    a[2] = 200;
    a[34] = 1;

    cout << a[34] <<endl;

    map<string,int> cint;
    cint["Hello"] = 5;

    cout << cint["Hello"]<<endl;


}
int main(){

    //myVector();
    //mySet();
    myMap();
    return 0;
}