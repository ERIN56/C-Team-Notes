#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
   
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
}

ex)
str1 = "FRANCE" str2 = "aa1+aa2"        // 특수문자도 toupper/tolower 사용 가능 (변화는 없음)
