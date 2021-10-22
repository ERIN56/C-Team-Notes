#include <iostream>
#include <tuple>
#include <queue>
using namespace std;

int main(){
 
  tuple<int, char> foo (10, 'x');
  auto bar = make_tuple ("test", 3.1, 14, 'y');
  
  get<2>(bar) = 100;      // access element
  
  int myint;
  char mychar;
  
  tie(myint, mychar) = foo;     // unpack element
  tie(ignore, ignore, myint, mychar) = bar;
  
  mychar = get<3>(bar);
  
  cout<<"foo contains: ";
  cout<<get<0>(foo)<<' ';
  cout<<get<1>(foo)<<'\n';
  
  //////////////////////////////////////////////////////////////////////
  
  queue<tuple<int, int, int>> que;
  int vk, vx, vy;
  tie(vk, vx, vy) = que.front();
 
  que.push({1, 2, 3});
  que.push(make_tuple(1, 2, 3));
  
  int z = get<0>(que.front());
  
           
}


>  출처 : [https://www.cplusplus.com/reference/tuple/tuple/?kw=tuple](https://www.cplusplus.com/reference/tuple/tuple/?kw=tuple)
