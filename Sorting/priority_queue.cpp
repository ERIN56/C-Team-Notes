STL의 우선순위 큐를 사용한 정렬

#include <queue>
using namespace std;

// 최대힙: less than operator를 사용하는 priority_queue
priority_queue<int> maxHeap;

#include <functional>

// 최소힙: greater than operator를 사용하는 priority_queue
priority_queue<int, vector<int>, greater<int>> minHeap;
