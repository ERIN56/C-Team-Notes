* p = unique(b, e) : 구간 [b,e)의 순차열을 인접한 중복 원소(값이 같은 원소: == )가 남지 않게 덮어쓰기로 이동한다. 알고리즘 수행 후 순차열은 [b, p)가 된다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(30);
    v.push_back(40);
    v.push_back(40);
    v.push_back(30);
    v.push_back(50);

    cout<<"V :";
    for(vector<int>::size_type i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int>::iterator iter_end;
    iter_end = unique(v.begin(), v.end());

    cout<<"V :";
    for(vector<int>::size_type i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"[v.begin(), iter.end) : ";
    for(vector<int>::iterator iter = v.begin(); iter != iter_end; iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}


<출력 결과>
v : 10 20 30 40 40 30 50
v : 10 20 30 40 30 50 30 50
[v.begin(), iter_end) : 10 20 30 40 30 50 