* map 컨테이너에서 처음 선언하는 방식에 따라 key 기준으로 오름차순, 내림차순을 지정할 수 있다.

하지만 1. 만약 key가 아닌 value를 비교하여 정렬하고 싶을 경우
혹은 2. 단순히 오름차순, 내림차순이 아닌 특정 조건에 의하여 정렬을 하고 싶은 경우

Map 을 vector 로 변환한 다음 vector 를 정렬한다.

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main(){
    map<int, int> map;

    map[5] = 20;
    map[2] = 50;
    map[3] = 10;
    map[4] = 40;
    map[1] = 30;
    map[6] = 60;

    for(auto it : map) {
        cout<<it.first<<":"<<it.second<<" ";
    }
    cout<<"\n=============================\n";

    vector<pair<int, int>> v(map.begin(), map.end());
    for(pair<int, int> it : v)
        cout<<it.first<<":"<<it.second<<" ";
    cout<<"\n=============================\n";

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b){
        return a.second > b.second;
    });

    for(pair<int, int> : v)
        cout<<it.first<<":"<<it.second<<" ";
    cout<<"\n=============================\n";   

}



< 출력 >
1:30 2:50 3:10 4:40 5:20 6:60
=================================
1:30 2:50 3:10 4:40 5:20 6:60
=================================
6:60 2:50 4:40 1:30 5:20 3:10
=================================

