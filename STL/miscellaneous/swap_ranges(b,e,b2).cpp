* swap_ranges(b,e,b2) : 구간 [b,e) 의 원소와 구간 [b2, b2+(e-b)) 의 원소와 교환한다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    vector<int> v2;
    v2.push_back(11);
    v2.push_back(22);
    v2.push_back(33);
    v2.push_back(44);
    v2.push_back(55);

    cout<<"v1: ";
    for(vector<int>::size_type i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    cout<<"v2: ";
    for(vector<int>::size_type i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl<<endl;
    
    swap_ranges(v1.begin(), v1.end(), v2.begin());

    cout<<"v1: ";
    for(vector<int>::size_type i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    cout<<"v2: ";
    for(vector<int>::size_type i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;


}

<출력 결과>
v1: 10 20 30 40 50 
v2: 11 22 33 44 55 

v1: 11 22 33 44 55 
v2: 10 20 30 40 50 