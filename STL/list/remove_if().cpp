#include <iostream>
#include <list>
using namespace std;

bool Predicate(int n){ // 단항 조건자
    return 10 <= n && n <= 30;
}

int main() {
    list<int> lt;

    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);
    lt.push_back(40);
    lt.push_back(50);
    lt.push_back(10);

    for(list<int>::iterator iter = lt.begin(); iter!=lt.end(); ++iter)
        cout<<*iter<<" ";
    cout<<endl; 

    lt.remove_if(Predicate); // 조건자가 참인 모든 원소를 제거

    for(list<int>::iterator iter = lt.begin(); iter!=lt.end(); ++iter)
        cout<<*iter<<" ";
    cout<<endl; 

}

< 출력 결과 >
10 20 30 40 50 10 
40 50