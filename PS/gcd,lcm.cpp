
int gcd(int m, int n) {       //최대 공약수
    if(n==0 return m;
    return gcd(n, m%n);
}
     
int lcm(int m, int n){      //최소 공배수
    return m*n / gcd(m, n)
}
     
     
* 여러수의 최소 공배수 *

1. 잘못된 접근 방법

기본적인 두 수의 최대공약수, 최소공배수를 구하고

두 수 a, b의 최대공약수 gcd
두 수 a, b의 최소공배수 lcm = (a * b) / gcd

세 수 a, b, c의 최대공약수 = 두 수 a, b의 최대공약수인 g와 c의 최대공약수 gcd
세 수 a, b, c의 최소공배수 = (a / gcd) * (b / gcd) * (c / gcd) * gcd

샘플케이스는 통과 하지만 간단하게 arr = [2,3,4] 이런 경우만 생각해봐도
리턴값은 12가 나와야하지만, 위의 방식으로 접근하면24라는 잘못된 값이 나오는걸 알 수 있습니다.

2. 제대로된 접근방법

세 수 a, b, c의 최소공배수 = 두 수 a, b의 최소공배수인 l과 c의 최소공배수 lcm

    while len(arr) >= 2:
        a = arr.pop()
        b = arr.pop()
        arr.append(lcm(a,b))

리스트에서 맨 뒤 2개의 수를 꺼내 최소공배수를 구하고, 리스트에 추가해주는 방식을 반복
마지막에 arr 리스트에 1개의 값만 있을 경우, 이 값이 n개수의 최소공배수가 됩니다.

단순하게 2개씩 구하면서 넘어가면되는 간단한 문젠데, 저처럼 방법때문에 삽질하시는 분들 계시다면....
참고하셔도 좋을것 같네요 ㅎㅎ

출처 : https://programmers.co.kr/questions/12126


프로그래머스>level2>N개의 최소 공배수>https://programmers.co.kr/learn/courses/30/lessons/12953


#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b){
    return (a*b) / gcd(a, b);
}

int solution(vector<int> arr) {
    int answer = arr[0];
    
    for(int i=1; i<arr.size(); i++){
        answer = lcm(answer, arr[i]);
    }

    return answer;
}

<입력예시>
{2, 6, 8, 14}

<출력예시>
168

     