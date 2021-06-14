#include <iostream>
#inlcude <vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    vector<int>::iterator iter = v.begin();
    cout<<iter[0]<<endl;     // [] 연산자    10
    cout<<iter[1]<<endl;     //20
    cout<<iter[2]<<endl;     //30

    iter += 2;              // += 연산

    vector<int>::iterator iter2 = iter+2;   // + 연산
}