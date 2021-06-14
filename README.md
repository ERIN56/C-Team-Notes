# C++ Coding Test Team Note
* This repository is Algorithm and STL and PS(Problem-Solving) for Coding Test
* 코딩테스트를 위한 (C++)알고리즘과 STL과 문제풀이 저장소입니다.


# Contents
* [Algorithm](#algorithm)
* [STL](#STL)
* [PS](#PS)
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
    * sort
    * priority_queue

### Searching
  * [Sequential Search](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Searching/sequentialSearch.cpp)
  * [Binary Search](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Searching/binarySearch.cpp)
  * DFS
    * [Visit Node Recursive](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Searching/dfs_visit_graph_node_recursive.cpp)
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
  * C++ String Library

### Dynamic Programming
  * [Fibonacci numbers](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/DP/pibonacci_DP.cpp)
  * [LIS (Longest Increasing Subsequence)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/DP/LIS(Longest%20Increasing%20Subsequence).cpp)
  * LCS (Longest Common Subsequence)

### Number Theory
  * [Permutation and Combination](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Number%20Theory/Permutation%20and%20Combination.cpp)
  * [Prime Distinction](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Number%20Theory/PrimeDistinction.cpp)
    * [Sieve of Eratosthenes](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Number%20Theory/Sieve%20of%20Eratosthenes.cpp)

### Miscellaneous
  * Two Pointers
    * [Number of intervals whom sum is M](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Miscellaneous/Number%20of%20intervals%20whos%20sum%20is%20M%20(Two%20Pointers).cpp)
  * [Sum of Intervals (Prefix Sum)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/Miscellaneous/Sum%20of%20Intervals%20(Prefix%20Sum).cpp)

## STL
### 구성 요소
 * 컨테이너(Container)
 * 반복자(Iterator)
 * 알고리즘(Algorithm)
 * 함수 객체(Function Object)
 * 어댑터(Adaptor)
 * 할당기(Allocator)
 * [vector](#vector)
 * [deque](#deque)
 * [list](#list)
 * [set](#set)
 * [map](#map)
 * [stack](#stack)
 * [queue](#queue)
 * [priority_queue](#priority_queue)
 * [string](#string)
 * [원소를 수정하지 않는 알고리즘](#원소를-수정하지-않는-알고리즘)
 * [원소를 수정하는 알고리즘](#원소를-수정하는-알고리즘)
 * [제거 알고리즘](#제거-알고리즘)
 * [변경 알고리즘](#변경-알고리즘)
 * [정렬 알고리즘](#정렬-알고리즘)
 * [정렬된 범위 알고리즘](#정렬된-범위-알고리즘)
 * [수치 알고리즘](#수치-알고리즘)
 
 </br>
 
 > 컨테이너  

 * 표준 시퀀스 컨테이너 : vector, deque, list (선형적) - 컨테이너 원소가 자신만의 삽입 위치(순서)를 가지는 컨테이너 (String, arr[n] : 근사 시퀀스 컨테이너) -> push_back(), pop_back() 제공
 * 표준 연관 컨테이너 :  set, multiset, map, multimap (비선형적) - 저장 원소가 삽입 순서와 다르게 특정 정렬 기준에 의해 자동 정렬되는 컨테이너

 * 배열 기반 컨테이너 : vector, deque -> operator[] 연산자 제공
 * 노드 기반 컨테이너 : list, set, multiset, map, multimap

> 반복자
 
 * 입력 반복자
 * 출력 반복자
 * 순방향 반복자
 * 양방향 반복자
 * 임의 접근 반복자

모든 컨테이너는 양방향 반복자 이상을 제공하며, 배열 기반 컨테이너인 vector와 deque는 [임의 접근 반복자]를 제공합니다.

> 어댑터

* 컨테이너 어댑터 : stack(default: deque), queue, priority_queue
* 반복자 어댑터 : reverse_iterator, back_insert_iterator, front_insert_iterator, insert_iterator
* 함수 어댑터 : 부정자(negator)-not2, 바인더(binder), 함수 포인터 어댑터(adpator for pointers to functions)

예제1. [reverse_iterator]   
 [역방향 반복자가 가리키는 실제 원소의 값은 다음 원소]   

예제2. [not2] : not1은 단항 조건자에 not2는 이항 조건자에 사용


## vector

## deque

## list

## set

## multiset

## map

## multimap

## stack

## queue

## priority_queue

## string

## 원소를 수정하지 않는 알고리즘(nonmodifying algorithms)

## 원소를 수정하는 알고리즘(modifying algorithms)

## 제거 알고리즘(removing algorithms)

## 변경 알고리즘(mutating algorithms)

## 정렬 알고리즘(sorting algorithms)

## 정렬된 범위 알고리즘(sorted range algorithms)

## 수치 알고리즘(numeric algorithms)

## PS






