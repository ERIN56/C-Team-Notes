#include <string>
#include <set>
#include <iostream>
using namespace std;

class Order{
 public:
    int y;
    int x;
    char dir;
    Order(int y, int x, char dir) : y(y), x(x), dir(dir) {};
};


class Compare{
 public:
    bool operator()(Order a, Order b) const{      //const 함수 사용
        if(a.y == b.y){
            if(a.x == b.x){
                return a.dir < b.dir;
            }
            return a.x < b.x;
        }
        return a.y < b.y;
    }
};

int solution(string dirs) {
   
    set<Order, Compare> st;   // 사용자 정의 객체의 대소 관계를 정의하는 함수객체 사용해야 함. (필수)
    
    const Order odr(y, x, ch);  // const 객체 넣어야 함.
    pair<set<Order>::iterator, bool> pr = st.insert(odr);
        
}
