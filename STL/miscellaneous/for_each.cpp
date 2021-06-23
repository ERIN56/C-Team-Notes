* f = for_each(b,e,f) : 구간 [b,e) 의 모든 원소에 f(*p) 동작을 적용한다. f 를 다시 되돌려준다.

예제1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Print(int n){
    cout<<n<<" ";
}

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for_each(v.begin(), v.begin()+2, Print);
}

<출력 결과>
10 20

예제2)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class PrintFunctor{
    char fmt;
public:
    explicit PrintFunctor(char c = ' ') : fmt(c) {}
    void operator() (int n) const
    {
        cout<<n<<fmt;
    }
};

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for_each(v.begin(), v.end(), PrintFunctor());   // 원소 구분을 ' ' 로
    cout<<endl;
    for_each(v.begin(), v.end(), PrintFunctor(','));  // 원소 구분을 ',' 로
}

<출력 결과>
10 20 30 40 50
10, 20, 30, 40, 50,