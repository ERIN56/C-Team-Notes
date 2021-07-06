프로그래머스 > level2 > 2019 KAKAO BLIND RECRUITMENT > 오픈 채팅방
https://programmers.co.kr/learn/courses/30/lessons/42888


#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>          // stringstream

using namespace std;

vector<string> solution(vector<string> record) {
    
    unordered_map<string, string> mp;
    string acti, id, name;
    
    for(string input : record){
        stringstream ss(input);
        ss>>acti;
        ss>>id;
        if(acti=="Enter" || acti=="Change"){
            ss>>name;
            mp[id] = name;
        }
    }
}


record : ["Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan"]
ex)
string input : "Enter uid1234 Muzi"
string acti = Enter
string id = uid1234
string name = Muzi