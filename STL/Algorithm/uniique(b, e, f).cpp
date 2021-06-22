* p = unique(b, e, f) : 구간 [b,e)의 순차열을 f(*p)가 참인 인접한 중복 원소가 남지 않게 덮어쓰기로 이동한다. 알고리즘 수행 후 순차열은 [b, p)가 된다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int left, int right){
    return abs(right-left) < 10;
}

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(30);
    v.push_back(32);
    v.push_back(40);
    v.push_back(50);

    cout<<"V :";
    for(vector<int>::size_type i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int>::iterator iter_end;
    iter_end = unique(v.begin(), v.end(), Pred);

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
v : 10 11 30 32 40 50
v : 10 30 40 50 40 50
[v.begin(), iter_end) : 10 30 40 50