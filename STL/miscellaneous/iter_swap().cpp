* iter_swap(p, q) : 반복자 p, q가 가리키는 *p 와 *q의 원소를 교환한다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);

    vector<int>::iterator p = v.begin();
    vector<int>::iterator q = v.begin()+1;

    cout<<"v[0]= "<<v[0]<<", "<<"v[1]= "<<v[1]<<endl;

    iter_swap(p, q);

    cout<<"v[0]= "<<v[0]<<", "<<"v[1]= "<<v[1]<<endl;
}

<출력 결과>
v[0]= 10, v[1]= 20
v[0]= 20, v[1]= 10
