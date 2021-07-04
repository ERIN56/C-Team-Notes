프로그래머스 > level1 > 시저 암호  https://programmers.co.kr/learn/courses/30/lessons/12926

#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";

    for(auto ch : s){
        if(isalpha(ch)){
            int start = ch>='a' ? 'a' : 'A';
            int nch = start + (ch-start+n)%26;
            answer += char(nch);
        }
        else {
            answer+=ch;
        }
    }
    return answer;
}


<입출력 예>
s         n       result
"AB"      1       "BC"
"a B z"   4       "e F d"