# C++ Coding Test Team Note
* This repository is Algorithm and STL and PS(Problem-Solving) for Coding Test
* 코딩테스트를 위한 (C++)알고리즘과 STL과 문제풀이 저장소입니다.


# Contents
* [Algorithm](#algorithm)
* [STL](#STL)
* [Problem-Solving](#Problem-Solving)
---
## Algorithm
### 복잡도   
N의 범위가 500인 경우 : O(n^3)인 알고리즘을 설계하면 풀 수 있다.   
N의 범위가 2,000인 경우 : O(n^2)   
N의 범위가 100,000인 경우 : O(nlogn)   
N의 범위가 10,000,000인 경우 : O(n)   

### Sorting
  * [Counting Sort](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Sorting/CountingSort.cpp)
  * [Quick Sort](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Sorting/quickSort.cpp)-unstable
  * Merge Sort-stable
  * [Topological Sort](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Sorting/TopologicalSort.cpp)
  * [Selection Sort](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Sorting/selectionSort.cpp)-unstable
  * [Insertion Sort](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Sorting/InsertionSort.cpp)-stable
  * Bubble Sort-stable
  * C++ Sort Library
    * sort (시퀀스 컨테이너만 가능)
    * [priority_queue](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Sorting/priority_queue.cpp)-unstable(힙정렬-O(nlog(2)n))

### Searching
  * [Sequential Search](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Searching/sequentialSearch.cpp)
  * [Binary Search](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Searching/binarySearch.cpp)
  * DFS
    * [Visit Node Recursive](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Searching/DFS/dfs_visit_graph_node_recursive.cpp)
  * BFS
    * [Visit Node Queue](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Searching/BFS/bfs_visit_graph_node_queue.cpp)

### Graph
  * [Dijkstra](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Graph/dikstraShortestPath.cpp) Shortest Path
  * [Floyd-WarShall](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Graph/Floyd-WarShall.cpp)  Shortest Path
  * [Kruskal](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Graph/kruskal%20MST.cpp)  Minimum Spanning Tree (MST)

### Data Structure
  * [Disjoint-Set (Union-Find)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Data%20Structure/Disjoint_Set(Union-Find).cpp)

### String
  * KMP
  * [C++ String Library](https://github.com/ERIN56/Cpp-Team-Notes/tree/master/STL/string)

### Dynamic Programming
  * [Fibonacci numbers](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/DP/pibonacci_DP.cpp)
  * [LIS (Longest Increasing Subsequence)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/DP/LIS(Longest%20Increasing%20Subsequence).cpp)
     * [Longest Bitonic Subsequence](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/PS/%EA%B0%80%EC%9E%A5%20%EA%B8%B4%20%EB%B0%94%EC%9D%B4%ED%86%A0%EB%8B%89%20%EB%B6%80%EB%B6%84%20%EC%88%98%EC%97%B4.cpp)
     * [LIS - O(nlogn)-이분탐색](https://jason9319.tistory.com/113)
  * LCS (Longest Common Subsequence)
  * [알고리즘 설명(coin change problem)](https://do-rang.tistory.com/9)
  </br>
  
  > DP 예제
  
  1) [프로그래스>가장 큰 정사각형](https://programmers.co.kr/learn/courses/30/lessons/12905)
  2) [프로그래머스>정수 삼각형](https://programmers.co.kr/learn/courses/30/lessons/43105)
  3) [프로그래머스>도둑질](https://programmers.co.kr/learn/courses/30/lessons/42897)

### Number Theory
  * [Permutation and Combination](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Number%20Theory/Permutation%20and%20Combination.cpp)
    * C++ Library [next_permutation(), prev_permution()](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Number%20Theory/next_permutation%2C%20prev_permutation.cpp) 
  * [Prime Number Distinction](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Number%20Theory/PrimeDistinction.cpp)
    * [Sieve of Eratosthenes](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Number%20Theory/Sieve%20of%20Eratosthenes.cpp)

### Miscellaneous
  * Two Pointers
    * [Number of intervals whom sum is M](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Miscellaneous/Number%20of%20intervals%20whos%20sum%20is%20M%20(Two%20Pointers).cpp)
  * [Sum of Intervals (Prefix Sum)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Miscellaneous/Sum%20of%20Intervals%20(Prefix%20Sum).cpp)

## STL
### 구성 요소
 * [vector](https://github.com/ERIN56/Cpp-Team-Notes/tree/master/STL/vector)
 * deque
 * [list](https://github.com/ERIN56/Cpp-Team-Notes/tree/master/STL/list)
 * [set](https://github.com/ERIN56/Cpp-Team-Notes/tree/master/STL/set)
 * [map](https://github.com/ERIN56/Cpp-Team-Notes/tree/master/STL/map)
 * stack
 * queue
 * priority_queue
 * [string](https://github.com/ERIN56/Cpp-Team-Notes/tree/master/STL/string)
</br>

 [C++ Reference](https://www.cplusplus.com/reference/cmath/)
 * isalpha()   [code](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/string/isalpha.cpp) | isdigit(char)   
 * p = unique(b, e) [code](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/miscellaneous/unique(b%2C%20e).cpp)  |  p = unique(b, e, f) [code](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/miscellaneous/uniique(b%2C%20e%2C%20f).cpp)
 * f = for_each(b,e,f) [code](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/miscellaneous/for_each.cpp)
 * iter_swap(p, q) [code](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/miscellaneous/iter_swap().cpp)
 * p = merge(b, e, b2, e, t) [code](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/miscellaneous/merge(b%2Ce%2Cb2%2Ce2%2Ct).cpp) |  p = merge(b, e, b2, e2, t, f) [code](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/miscellaneous/merge(b%2Ce%2Cb2%2Ce2%2Ct%2Cf).cpp)
 * replace(b, e, x, x2) [code](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/miscellaneous/replace.cpp)
 * swap_range(b, e, b2) [code](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/miscellaneous/swap_ranges(b%2Ce%2Cb2).cpp)
 * accumulate(b, e, 0) [code](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/miscellaneous/accumulate.cpp)
 * fill_n(count, n, 0);
 * stringstream [code](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/miscellaneous/stringstream.cpp)
 * [map<string, vector> map;](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/miscellaneous/map%3Cstring,%20vector%3E%20map.cpp)
 * stringConversion(stoi, stoul(unsigned long), stoull(unsigned long long), stof, stod, stold(long double))

 </br>
 </br>

[개념](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/개념.md)</br>
</br>

## Problem-Solving
### TIP
* int arr[][] 형태는 n 이 1500 이하 일 경우 가능
* 빠른 입출력    
  `ios_base::sync_with_stdio(false); cin.tie(NULL); (endl 대신) "\n"`   
  (단, scanf/printf/puts/getchar/putchar 등 C의 입출력 방식은 사용불가) 
* 오류 해결
  * [(signal: aborted (core dumped)) / (signal: segmentation fault (core dumped))](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/PS/%EC%98%A4%EB%A5%98%20%ED%95%B4%EA%B2%B0/signal-aborted(core%20dumped).md)   
  * [signal: floating point exception (core dumped)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/PS/%EC%98%A4%EB%A5%98%20%ED%95%B4%EA%B2%B0/floating%20point%20exception.md)

* [소수점](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/PS/%EC%86%8C%EC%88%98%EC%A0%90/README.md)
* Stable Sort   
  * stable_sort(v.begin(), v.end(), compare); 에서 bool compare(int& a, int& b) 하면 오류. & 없이 사용해야 한다.   
    *bool compare(int a, int b) { }    ->   (O)*
* [set에 사용자 정의 객체 삽입 (const 객체를 사용)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/PS/set%EC%97%90%20%EC%82%AC%EC%9A%A9%EC%9E%90%20%EC%A0%95%EC%9D%98%20%EA%B0%9D%EC%B2%B4.cpp)
* s.erase(p) 에서 p에 반복자가 아닌 인덱스 값이 들어가면 해당 인덱스값부터 모든 문자가 지워진다. (반복자를 넣으면 반복자가 가리키는 해당 값만 삭제)
* \>\>(비트 이동 연산자)
  * m << n : m 을 왼쪽으로 n 만큼 이동 = n >> m        // 부등호가 m(이동대상)쪽으로 등지고 있으면 왼쪽 이동
  * m >> n : m 을 오른쪽으로 n 만큼 이동 = n << m      // 부등호가 m(이동대상)쪽으로 입벌리고 있으면 오른쪽 이동, m/2^n 의 값

### Solving
 * void [**rotate90degree**](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/PS/void%20rotate90degree.cpp)(vector<vector<int>>& key)
 * string [**change**](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/PS/string%20change(string%20keyword%2C%20string%20from%2C%20string%20to).cpp)(string keyword, string from, string to)
 * [**map** value sort](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/PS/mapvaluesort.cpp)
 * [문자열을 [n] 기준으로 오름차순 정렬 - 함수 객체(멤버변수 사용, operator()), sort](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/PS/%EB%AC%B8%EC%9E%90%EC%97%B4%20%EB%82%B4%20%EB%A7%88%EC%9D%8C%EB%8C%80%EB%A1%9C%20%EC%A0%95%EB%A0%AC%ED%95%98%EA%B8%B0.cpp)
 * [알파벳 n 만큼 밀기(Z+2=B)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/PS/%EC%95%8C%ED%8C%8C%EB%B2%B3%20n%20%EB%A7%8C%ED%81%BC%20%EB%B0%80%EA%B8%B0.cpp)
 * [matrix multiplication](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/PS/matrix%20multiplication.cpp)
 * [gcd / lcm (최대 공약수, 최소 공배수)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/PS/gcd%2Clcm.cpp)
