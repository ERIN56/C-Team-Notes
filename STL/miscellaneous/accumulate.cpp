#include <string>
#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> arr) {
    double answer = accumulate(arr.begin(), arr.end(), 0);
    return answer/arr.size();
}

<입출력 예>
arr             return
[1,2,3,4]       2.5