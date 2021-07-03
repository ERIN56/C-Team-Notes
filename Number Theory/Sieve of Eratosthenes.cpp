에라토스테네스의 체
(O(nloglogn)-빠름, but 메모리가 많이 필요, n이 1000000 이내로 주어지는 경우 적합)

#include <bits/stdc++.h>

using namespace std;

int n = 1000; // 2부터 1,000까지의 모든 수에 대하여 소수 판별
// 처음엔 모든 수가 소수(True)인 것으로 초기화(0과 1은 제외)
vector<int> arr(n + 1, true);
//1이 소수인지 판별해야 한다면 arr[1]을 false로

int main() {
    // 에라토스테네스의 체 알고리즘 수행
    // 2부터 n의 제곱근까지의 모든 수를 확인하며
    for (int i = 2; i <= (int) sqrt(n); i++) {
        // i가 소수인 경우(남은 수인 경우)
        if (arr[i] == true) {
            // i를 제외한 i의 모든 배수를 지우기
            int j = 2;
            while (i * j <= n) {
                arr[i * j] = false;
                j += 1;
            }
        }
    }
    // 모든 소수 출력
    for (int i = 2; i <= n; i++) {
        if (arr[i]) cout << i << ' ';
    }
}



//solutino 2.
int solution(int n) {
    int answer=0;
    vector<bool> prime(n+1, true);
    
    for(int i=2; i<=n; i++){
        if(prime[i]){
            for(int j=2; i*j<=n; j++) prime[i*j] = false;
            answer++;
        }
    }
    
    return answer;
}
