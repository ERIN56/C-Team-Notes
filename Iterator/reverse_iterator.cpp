#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // 방법 1.
    reverse_iterator<vector<int>::iterator> riter(v.end());
    reverse_iterator<vector<int>::iterator> end_riter(v.begin());

    for(; riter!=end_riter; ++riter)
        cout<<*riter<<" ";               // 30 20 10
    cout<<endl;

    // 방법 2. rbegin(), rend() 사용
    vector<int>::reverse_iterator riter(v.rbegin());
    for(; riter != v.rend(); ++riter)
        cout<<*riter<<" ";              // 30 20 10
    cout<<endl;

}