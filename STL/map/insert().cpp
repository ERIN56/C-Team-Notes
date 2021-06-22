#include <iostream>
#include <map>
using namespace std;

int main(){

    map<int, int> m; 

    m.insert(pair<int, int>(5, 100));       // 임시 pair 객체 생성 후 저장
    m.insert(pair<int, int>(3, 100));
    m.insert(pair<int, int>(8, 30));
    m.insert(pair<int, int>(4, 40));
    m.insert(pair<int, int>(1, 70));
    m.insert(pair<int, int>(7, 100));

    pair<int, int> pr(9, 50);
    m.insert(pr);               // pair 객체 생성 후 저장

    map<int, int>::iterator iter;
    for(iter = m.begin(); iter != m.end(); ++iter){
        cout<<"("<<(*iter).first<<", "<<(*iter).second<<") ";
    }
    cout<<endl;

    // 반복자는 -> 연산자가 오버로딩 되어 있으므로 포인터 처럼 멤버를 -> 연산자로 접근 할 수 있다.
    for(iter = m.begin(); iter!=m.end(); ++iter){
        cout<<"("<<iter->first<<", "<<iter->second<<") ";
    }
    cout<<endl;

}

<출력 결과>
(1, 70) (3, 100) (4, 40) (5, 100) (7, 100) (8, 30) (9, 50)
(1, 70) (3, 100) (4, 40) (5, 100) (7, 100) (8, 30) (9, 50)