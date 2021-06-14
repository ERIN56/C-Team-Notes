* 인접한 원소를 하나만 남기므로, 연속하지 않는 원소는 중복될 수 있다.
* unique() 멤버 함수로 모든 원소를 유일하게 만들고자 한다면 원소를 정렬한 후 수행

#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> lt;

    lt.push_back(10);
    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);
    lt.push_back(30);
    lt.push_back(30);
    lt.push_back(40);
    lt.push_back(50);
    lt.push_back(10);

    list<int>::iterator iter;
    for(iter=lt.begin(); iter!=lt.end(); ++iter)
        cout<<*iter<<" ";
    cout<<endl;

    lt.unique();

    for(iter=lt.begin(); iter!=lt.end(); ++iter)
        cout<<*iter<<" ";
    cout<<endl;

}

< 출력 결과 >
10 10 20 30 30 30 40 50 10 
10 20 30 40 50 10