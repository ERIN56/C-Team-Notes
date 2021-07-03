프로그래머스 > level1 > 문자열 내 마음대로 정렬하기

* 정수 n 이 주어졌을 때, 각 문자열의 인덱스 n 번째 글자를 기준으로 오름차순 정렬.
* 예를 들어 strings 가 ["sun", "bed", "car"] 이고 n이 1이면 각 단어의 인덱스 1의 문자 "u", "e", "a"로 strings를 정렬
* 인덱스 1의 문자가 같은 문자열이 여럿일 경우, 사전순으로 앞선 문자열이 앞쪽에 위치


#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Compare{
  int n;
public:
    Compare(int n) : n(n) {};
    bool operator()(string& a, string& b){
        if(a[n]==b[n]) return a < b;
        return a[n] < b[n];
    }
};

vector<string> solution(vector<string> strings, int n) {
    sort(strings.begin(), strings.end(), Compare(n));
    vector<string> answer = strings;
    return answer;
}