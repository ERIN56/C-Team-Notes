#include <iostream>
#include <functional>  //not2, less 사용
using namespace std;

int main(){
     cout<< less<int>()(10, 20)<<endl;         // 1
     cout<< less<int>()(0, 0)<<endl;           // 0
     cout<< less<int>()(20,10)<<endl;          // 0

    //임시 객체 less 에 not2 어댑터 적용
    cout<<not2(less<int>())(10, 12)<<endl;     // 0
    cout<<not2(less<int>())(0, 0)<<endl;        // 1
    cout<<not2(less<int>())(20, 10)<<endl;     // 1
}