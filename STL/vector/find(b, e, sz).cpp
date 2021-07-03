프로그래머스 > level1 > 서울에서 김서방 찾기 https://programmers.co.kr/learn/courses/30/lessons/12919


#include <string>
#include <vector>
#include <algorithm>
#include <iterator>             //find
using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
    int index = find(seoul.begin(), seoul.end(), "Kim") - seoul.begin();
    answer = "김서방은 "+to_string(index) + "에 있다";
    return answer;
}


<입력 예시>
seoul
["Jane", "Kim"]

<출력 예시>
"김서방은 1에 있다"