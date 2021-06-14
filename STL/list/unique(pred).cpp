#include <iostream>
#include <list>
using namespace std;

bool Predicate(int first, int second){
    return second - first <= 0;
}

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

    lt.unique(Predicate);       // 이항 조건자가 참이면 원소를 제거.

    for(iter=lt.begin(); iter!=lt.end(); ++iter)
        cout<<*iter<<" ";
    cout<<endl;

}

< 출력 결과 >
10    10    20    30    30    30    40    50    10 
  true false  false true  true false false  true
10 20 30 40 50