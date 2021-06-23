* p = merge(b,e,b2,e2,t) : 정렬된 순차열 [b,e) 과 [b2, e2)를 [t,p)로 합병 정렬한다.
* 기본적으로 오름차순 정렬 기준(less:<)을 전제로 동작
* 특정 정렬 기준에 의해 정렬된 두 순차열을 합병하려면 merge(b,e,b2,e2,t,f) 알고리즘 사용

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(30);
    v1.push_back(50);
    v1.push_back(60);
    v1.push_back(80);

    vector<int> v2;
    v2.push_back(20);
    v2.push_back(40);
    v2.push_back(70);

    vector<int> v3(10);         //size 10인 vector  생성

    vector<int>::iterator iter_end;
    iter_end = merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

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
v1 : 10 30 50 60 80 
v2 : 20 40 70 
v3 : 10 20 30 40 50 60 70 80 0 0 
v3(합병 순차열): 10~80