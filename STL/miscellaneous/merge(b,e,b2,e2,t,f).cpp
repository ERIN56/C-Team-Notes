* p = merge(b,e,b2,e2,t,f) : 정렬된 순차열 [b,e)과 [b2, e2)를 f 를 정렬 기준, [t,p)로 합병 정렬한다.
* 정렬 기준으로 greater을 사용한 예제

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
class Greater{
public:
    bool operator()(const T& left, const T& right) const
    {
        return left > right;
    }
};

int main(){
    vector<int> v1;
    v1.push_back(80);
    v1.push_back(60);
    v1.push_back(50);
    v1.push_back(30);
    v1.push_back(10);

    vector<int> v2;
    v2.push_back(70);
    v2.push_back(40);
    v2.push_back(20);

    vector<int> v3(10);         //size 10인 vector  생성

    vector<int>::iterator iter_end;
    iter_end = merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin(), Greater<int>());

    cout<<"v1 : ";
    for(vector<int>::size_type i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"v2 : ";
    for(vector<int>::size_type i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    cout<<"v3 : ";
    for(vector<int>::size_type i=0; i<v3.size(); i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;

    cout<<"v3(합병 순차열): "<<*v3.begin()<<'~'<<*(iter_end-1)<<endl;

}

<출력 결과>
v1 : 80 60 50 30 10 
v2 : 70 40 20 
v3 : 80 70 60 50 40 30 20 10 0 0 
v3(합병 순차열): 80~10