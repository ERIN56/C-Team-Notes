* 재귀함수로 DFS를 구현하면 컴퓨터 시스템의 동작 특성상 실제 프로그램의 수행 시간은 느려질 수 있다. 따라서 스택 라이브러리를 이용해 시간 복잡도를 완화하는 테크닉이 필요할 때도 있다.
* 보통 DFS 보다는 BFS 구현이 조금 더 빠르게 동작한다.

재귀함수로 구현한 DFS 탐색 (노드 순회 방문) (O(N))

#include <bits/stdc++.h>

using namespace std;

// 노드의 개수 1~8 , 8개
bool visited[9];
vector<int> graph[9];

void dfs(int x) {
    // 현재 노드를 방문 처리
    visited[x] = true;
    cout << x << ' ';

    // 현재 노드와 연결된 다른 노드를 재귀적으로 방문
    for (int i = 0; i < graph[x].size(); i++) {
        int y = graph[x][i];
        if (!visited[y]) dfs(y);
    }
}

int main(void) {

    // 인접 리스트 사용
    // 노드 1에 연결된 노드 정보 저장
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(8);
    
    // 노드 2에 연결된 노드 정보 저장
    graph[2].push_back(1);
    graph[2].push_back(7);
    
    // 노드 3에 연결된 노드 정보 저장
    graph[3].push_back(1);
    graph[3].push_back(4);
    graph[3].push_back(5);
    
    // 노드 4에 연결된 노드 정보 저장
    graph[4].push_back(3);
    graph[4].push_back(5);
    
    // 노드 5에 연결된 노드 정보 저장
    graph[5].push_back(3);
    graph[5].push_back(4);
    
    // 노드 6에 연결된 노드 정보 저장
    graph[6].push_back(7);
    
    // 노드 7에 연결된 노드 정보 저장
    graph[7].push_back(2);
    graph[7].push_back(6);
    graph[7].push_back(8);
    
    // 노드 8에 연결된 노드 정보 저장
    graph[8].push_back(1);
    graph[8].push_back(7);
    
    // 시작 노드 1
    dfs(1);
}

< 출력 결과 >
1 2 7 6 8 3 4 5 (1에서 가장 깊은 곳 까지 갔다가 돌아와 순회)


스택으로 구현한 DFS 탐색 (노드 순회 방문)

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// 노드의 개수 1~8 , 8개
bool visited[9];
vector<int> graph[9];

void dfs(int x) {
    stack<int> st;
    st.push(x);
    cout<<x<<" ";
    visited[x] = true;

    while(!st.empty()){
        int now = st.top();

        bool left = false;
        for(int i=0 ;i<graph[now].size(); i++){
            int neighbor = graph[now][i];
            if(visited[neighbor]==false){
                st.push(neighbor);
                visited[neighbor] = true;
                cout<<neighbor<<" ";
                left = true;
            }
        }
        if(left==false) st.pop();
    }
}

int main(void) {

    // 인접 리스트 사용
    // 노드 1에 연결된 노드 정보 저장
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(8);
    
    // 노드 2에 연결된 노드 정보 저장
    graph[2].push_back(1);
    graph[2].push_back(7);
    
    // 노드 3에 연결된 노드 정보 저장
    graph[3].push_back(1);
    graph[3].push_back(4);
    graph[3].push_back(5);
    
    // 노드 4에 연결된 노드 정보 저장
    graph[4].push_back(3);
    graph[4].push_back(5);
    
    // 노드 5에 연결된 노드 정보 저장
    graph[5].push_back(3);
    graph[5].push_back(4);
    
    // 노드 6에 연결된 노드 정보 저장
    graph[6].push_back(7);
    
    // 노드 7에 연결된 노드 정보 저장
    graph[7].push_back(2);
    graph[7].push_back(6);
    graph[7].push_back(8);
    
    // 노드 8에 연결된 노드 정보 저장
    graph[8].push_back(1);
    graph[8].push_back(7);
    
    // 시작 노드 1
    dfs(1);
}

<출력 결과>
1 2 3 8 7 6 4 5 
