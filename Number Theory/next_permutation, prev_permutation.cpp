* 오름차순으로 정렬된 특정 배열을 대상
순열 (next_permutation)

#include <iostream>   
#include <algorithm>    // next_permutation 함수와 sort함수 사용

using namespace std;

int main(void) {
  int myints[3] = {1,2,3};
  sort(myints,myints+3); //오름차순 정렬
  do {
    cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
  } while(next_permutation(myints, myints + 3));

  cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';

  return 0;
}


< 출력 결과 >
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
After loop: 1 2 3       //do while 문을 탈출한 후에 배열의 요소들은 원래대로 돌아온다.


5개의 수(1, 2, 3, 4, 5)에서 3가지를 고르는 조합

#include <iostream>    
#include <algorithm>    // next_permutation 함수 사용

using namespace std;

int Array[5] = {1,2,3,4,5};
bool Select[5] = {0,0,1,1,1}; // 오름차순

int main(void) {
    do {
        for(int i=0; i<5; i++) {
            if(Select[i]) cout<<Array[i]<<" ";
        }
        cout<<"\n";
    } while (next_permutation(Select, Select+5));
    return 0;
}

< 출력 결과 >

3 4 5
2 4 5
2 3 5
2 3 4
1 4 5
1 3 5
1 3 4
1 2 5
1 2 4
1 2 3

  
do while문에서 Select 배열은 다음과 같이 변한다.

0 0 1 1 1
0 1 0 1 1
0 1 1 0 1
0 1 1 1 0
1 0 0 1 1
1 0 1 0 1
1 0 1 1 0
1 1 0 0 1
1 1 0 1 0
1 1 1 0 0


단, 1 2 3 부터 3 4 5 순서대로 출력하는 것이 아니라 그 반대 순서로 출력되는 것이 큰 단점이다.
순서를 반대로 하고 싶은 경우, prev_permutation을 쓴다.

#include <iostream>
#include <algorithm>

using namespace std;

int Array[5] = {1,2,3,4,5};
bool Select[5] = {1,1,1,0,0}; //Select 배열의 순서도 반대로 한다. 내림차순

int main(void) {
    do {
        for(int i=0; i<5; i++) {
            if(Select[i]) cout<<Array[i]<<" ";
        }
        cout<<"\n";
    } while (prev_permutation(Select, Select+5)); //prev_permutation 활용
    return 0;
}


<출력 결과>
1 2 3
1 2 4
1 2 5
1 3 4
1 3 5
1 4 5
2 3 4
2 3 5
2 4 5
3 4 5

이번에는, do while문에서 Select 배열이 아래와 같이 변한다.

1 1 1 0 0
1 1 0 1 0
1 1 0 0 1
1 0 1 1 0
1 0 1 0 1
1 0 0 1 1
0 1 1 1 0
0 1 1 0 1
0 1 0 1 1
0 0 1 1 1

