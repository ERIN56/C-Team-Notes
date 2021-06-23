https://www.acmicpc.net/problem/11054 < 가장 긴 바이토닉 부분 수열


#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> arr;
vector<int> dp1;
vector<int> dp2;

int main(){
  cin>>n;
  arr.reserve(n);
  dp1.assign(n, 1);
  dp2.assign(n, 1);

  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    arr[i] = x;

    for(int j=0; j<i; j++){
      if(arr[i] > arr[j] && dp1[i] < dp1[j]+1)
        dp1[i] = dp1[j]+1;
    }
  }

  for(int i=n-1; i>0; i--){
    for(int j=n-1; j>i; j--){
      if(arr[i] > arr[j] && dp2[i] < dp2[j]+1)
        dp2[i] = dp2[j]+1;
    }
  }

  int answer = 0;

  for(int i=0; i<n; i++){
    answer = max(answer, dp1[i]+dp2[i]-1);
  }
  cout<<answer<<endl;

}
