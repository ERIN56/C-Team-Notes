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
  * [Selection Sort](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Sorting/selectionSort.cpp)
  * [Insertion Sort](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Sorting/InsertionSort.cpp)
  * [Quick Sort](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Sorting/quickSort.cpp)
  * [Counting Sort](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Sorting/CountingSort.cpp)
  * [Topological Sort](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Sorting/TopologicalSort.cpp)
  * C++ Sort Library
    * sort (시퀀스 컨테이너만 가능)
    * priority_queue(힙정렬-O(nlogn))

### Searching
  * [Sequential Search](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Searching/sequentialSearch.cpp)
  * [Binary Search](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Searching/binarySearch.cpp)
  * DFS
    * [Visit Node Recursive](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Searching/DFS/dfs_visit_graph_node_recursive.cpp)
  * BFS
    * [Visit Node Queue](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Searching/BFS/bfs_visit_graph_node_queue.cpp)

### Graph
  * [Dijkstra Shortest Path](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Graph/dikstraShortestPath.cpp)
  * [Floyd-WarShall](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Graph/Floyd-WarShall.cpp)
  * [Kruskal Minimum Spanning Tree (MST)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Graph/kruskal%20MST.cpp)

### Data Structure
  * [Disjoint-Set (Union-Find)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Data%20Structure/Disjoint_Set(Union-Find).cpp)

### String
  * KMP
  * [C++ String Library](https://github.com/ERIN56/Cpp-Team-Notes/tree/master/STL/string)

### Dynamic Programming
  * [Fibonacci numbers](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/DP/pibonacci_DP.cpp)
  * [LIS (Longest Increasing Subsequence)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/DP/LIS(Longest%20Increasing%20Subsequence).cpp)
  * LCS (Longest Common Subsequence)

### Number Theory
  * [Permutation and Combination](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Number%20Theory/Permutation%20and%20Combination.cpp)
    * C++ Library [next_permutation(), prev_permution()](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Number%20Theory/next_permutation%2C%20prev_permutation.cpp) 
  * [Prime Distinction](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Number%20Theory/PrimeDistinction.cpp)
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

 * isalpha()   [code](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/string/isalpha.cpp)
 * p = unique(b, e) [code](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/Algorithm/unique(b%2C%20e).cpp)  /  p = unique(b, e, f) [code](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/Algorithm/uniique(b%2C%20e%2C%20f).cpp)
 * f = for_each(b,e,f) [code](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/Algorithm/for_each.cpp)
 
 </br>
 </br>

 > 컨테이너 (Container)

 * 표준 시퀀스 컨테이너 : vector, deque, list (선형적) - 컨테이너 원소가 자신만의 삽입 위치(순서)를 가지는 컨테이너 (String, arr[n] : 근사 시퀀스 컨테이너) -> push_back(), pop_back() 제공
 * 표준 연관 컨테이너 :  set, multiset, map, multimap (비선형적) - 저장 원소가 삽입 순서와 다르게 특정 정렬 기준에 의해 자동 정렬되는 컨테이너

 * 배열 기반 컨테이너 : vector, deque -> operator[] 연산자 제공
 * 노드 기반 컨테이너 : list, set, multiset, map, multimap

</br>

> 반복자 (Iterator)
 
 * 입력 반복자
 * 출력 반복자
 * 순방향 반복자
 * 양방향 반복자
 * 임의 접근 반복자

  ##### 모든 컨테이너는 양방향 반복자 이상을 제공하며, 배열 기반 컨테이너인 vector와 deque는 [임의 접근 반복자](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/Iterator/임의접근반복자.cpp)를 제공합니다.

</br>

> 알고리즘 (Algorithm)   
</br>

> 함수 객체 (Function Object)
</br>

> 어댑터

* 컨테이너 어댑터 : stack(default: deque), queue, priority_queue
* 반복자 어댑터 : reverse_iterator, back_insert_iterator, front_insert_iterator, insert_iterator
* 함수 어댑터 : 부정자(negator)-not2, 바인더(binder), 함수 포인터 어댑터(adpator for pointers to functions)
</br>

   예제1. [reverse_iterator](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/Iterator/reverse_iterator.cpp)   
   예제2. 역방향 반복자가 가리키는 실제 원소의 값은 다음 원소 [코드](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/Iterator/reverse_iterator_real%20Value.cpp)   

   예제3. [not2](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Not2.cpp) (not1은 단항 조건자에 not2는 이항 조건자에 사용)
   
</br>

> 할당기 (Allocator)
</br>
</br>

## Problem-Solving
### TIP
* int arr[][] 형태는 n 이 1500 이하 일 경우 가능
* 빠른 입출력    
  `ios_base::sync_with_stdio(false); cin.tie(NULL); (endl 대신) "\n"`   
  (단, scanf/printf/puts/getchar/putchar 등 C의 입출력 방식은 사용불가) 
* 오류 해결
  * [(signal: aborted (core dumped)) / (signal: segmentation fault (core dumped))](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/PS/%EC%98%A4%EB%A5%98%20%ED%95%B4%EA%B2%B0/signal-aborted(core%20dumped).md)   

* [소수점](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/PS/%EC%86%8C%EC%88%98%EC%A0%90/README.md)
* Stable Sort   
  * stable_sort(v.begin(), v.end(), compare); 에서 bool compare(int& a, int& b) 하면 오류. & 없이 사용해야 한다.   
    *bool compare(int a, int b) { }    ->   (O)*

### Solving
 * void [**rotate90degree**](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/PS/void%20rotate90degree.cpp)(vector<vector<int>>& key)
 * string [**change**](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/PS/string%20change(string%20keyword%2C%20string%20from%2C%20string%20to).cpp)(string keyword, string from, string to)
 * [**Map value sort**](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/PS/mapvaluesort.cpp)
 * [**가장 긴 바이토닉 부분 수열**]


