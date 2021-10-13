#include <bits/stdc++.h>
using namespace std;

int main(){
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  cout<<s.size()<<endl;                    //3
  if(s.empty()) cout<<"s is empty"<<endl;
  else cout<<"s is not empty"<<endl;      // s is not empty
  
  s.pop();
  cout<<s.top()<<endl;                    // 20
  s.pop();
  cout<<s.top()<<endl;                    // 10
  s.pop();                                // empty
  
  if(s.empty()) cout<<"s is empty"<<endl; // s is empty
  cout<<s.top()<<endl;                    // runtime error 발생!!
}
