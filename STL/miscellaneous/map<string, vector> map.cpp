#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    
    map<string, vector<string>> mCloth;         // map 생성
  
    for(auto elem : clothes)
    {
        mCloth[elem.at(1)].push_back(elem.at(0));
    }
  
    for(auto elem : mCloth)
    {
        answer*=elem.second.size()+1;       // elem.second.size() == 2
    }
  
    answer--;
    return answer;
}

<입력 예시>

[["yellowhat", "headgear"], ["bluesunglasses", "eyewear"], ["green_turban", "headgear"]]
[["crowmask", "face"], ["bluesunglasses", "face"], ["smoky_makeup", "face"]]

<map 결과>

["headgear"] : ["yellowhat", "green_turban"]
["eyewear"] : ["bluesunglasses"]
-------------------------
["face"] : ["crowmask", "bluesunglasses", "smoky_makeup"];


출처 : 프로그래머스 > level2 > 위장 https://programmers.co.kr/learn/courses/30/lessons/42578
