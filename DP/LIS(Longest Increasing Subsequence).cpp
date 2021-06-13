가장 긴 증가하는 부분 수열

#include <vector>
#include <iostream>
using namespace std;

int n; //수열의 원소 개수
vector<int> arr; //수열
int dp[2000]; 

int main(){
  cin>>n;

  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    arr.push_back(x);
  }

  for(int i=0; i<n; i++){
    dp[i] = 1;
  }

  for(int i=1; i<n; i++){
    for(int j=0; j<i; j++){
      if(arr[j] < arr[i]){
        dp[i] = max(dp[i], dp[j]+1);
      }
    }
  }

  int maxValue=0;

  for(int i=0; i<n; i++){
    maxValue = max(maxValue, dp[i]); //가장 긴 부분 수열 수
  }

  cout<<n-maxValue<<endl; // 가장 긴 부분수열에 속하지 않는 갯수

}

<입력>
10 20 10 30 20 50

<출력>
2
(n:6, maxValue:4)