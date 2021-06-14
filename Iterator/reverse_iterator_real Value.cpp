#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<int>::iterator normal_iter = v.begin() + 3;
    vector<int>::reverse_iterator reverse_iter(normal_iter);

    cout<<*normal_iter<<endl;       // 40
    cout<<*reverse_iter<<endl;      // 30

    // 정방향 출력
    for(vector<int>::iterator iter = v.begin(); iter!=normal_iter; ++iter)
        cout<<*iter<<" ";           // 10 20 30
    cout<<endl;

    // 역방향 출력
    for(vector<int>::reverse_iterator riter = reverse_iter; riter!=v.rend(); ++riter){
        cout<<*riter<<" ";          // 30 20 10
    }
    cout<<endl; 

}