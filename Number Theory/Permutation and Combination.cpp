순열 - 서로 다른 n개에서 r개를 선택하여 일렬로 나열하는 것
nPr = n! / (n-r)!
조합 - 서로 다른 n개에서 순서에 상관없이 서로 다른 r개를 선택하는 것
nCr = n! / r! x (n-r)!

ex) [1, 2, 3]에서 서로 다른 원소 2개를 뽑아 나열할 경우
순열)
[1,2], [1,3], [2,1], [2,3], [3,1], [3,2]

조합)
[1,2], [1,3], [2,3]


재귀로 구현한 조합

#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;
vector<bool> selected(5);

void print(){
  for(int i=0; i<5; i++){
      if(selected[i]) cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void DFS(int Idx, int cnt){
  if(cnt==3){
    print();
    return;
  }
  for(int i=Idx; i<5; i++){
    if(selected[i]) continue;
    selected[i] = true;
    DFS(i+1, cnt+1);
    selected[i] = false;
  }

}


int main(){

  for(int i=1; i<=5; i++){
    arr.push_back(i);
  }

  DFS(0,0);
}



재귀로 구현한 순열

#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;
vector<bool> selected(5);
vector<int> v;

void print(){
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

void DFS(int cnt){
  if(cnt==3){
    print();
    return;
  }
  for(int i=0; i<5; i++){
    if(selected[i]) continue;
    selected[i] = true;
    v.push_back(arr[i]);
    DFS(cnt+1);
    selected[i] = false;
    v.pop_back();
  }

}


int main(){

  for(int i=1; i<=5; i++){
    arr.push_back(i);
  }

  DFS(0);
}



재귀로 구현한 중복 조합

#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;
vector<int> selected(5);

void print(){
  for(int i=0; i<3; i++){
    cout<<selected[i]<<" ";
  }
  cout<<endl;
}

void DFS(int Idx, int cnt){
  if(cnt==3){
    print();
    return;
  }
  for(int i=Idx; i<5; i++){
    selected[cnt] = arr[i];
    DFS(i, cnt+1);
  }

}


int main(){

  for(int i=1; i<=5; i++){
    arr.push_back(i);
  }

  DFS(0,0);

}


재귀로 구현한 중복 순열

#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;
vector<int> selected(5);

void print(){
  for(int i=0; i<3; i++){
    cout<<selected[i]<<" ";
  }
  cout<<endl;
}

void DFS(int cnt){
  if(cnt==3){
    print();
    return;
  }
  for(int i=0; i<5; i++){
    selected[cnt] = arr[i];
    DFS(cnt+1);
  }

}


int main(){

  for(int i=1; i<=5; i++){
    arr.push_back(i);
  }

  DFS(0);

}
