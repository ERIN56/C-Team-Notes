#include <iostream>
#include <string>
using namespace std;

int main(){
    const char* p1 = "Hello!";
    const char* p2 = p1 + 6;

    string s(p1, p2);
    cout<<"s(p1, p2): "<<s<<endl;
}

<출력 결과>
s(p1, p2): Hello!