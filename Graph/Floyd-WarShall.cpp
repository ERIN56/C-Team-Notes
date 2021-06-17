플로이드 워셜 최단 경로 알고리즘 (O(n^3))

#include <bits/stdc++.h>
#define INF 1e9 // 무한을 의미하는 값으로 10억을 설정

using namespace std;

int v, e;
// 노드의 개수(v), 간선의 개수(e)
// 노드의 개수는 최대 500개라고 가정

int graph[501][501];    // 2차원 배열(그래프 표현)를 만들기

int main(void) {
    cin >> v >> e;

    // 최단 거리 테이블을 모두 무한으로 초기화
    for (int i = 0; i < 501; i++) {
        fill(graph[i], graph[i] + 501, INF);
    }

    // 자기 자신에서 자기 자신으로 가는 비용은 0으로 초기화
    for (int a = 1; a <= v; a++) {
        for (int b = 1; b <= v; b++) {
            if (a == b) graph[a][b] = 0;
        }
    }

    // 각 간선에 대한 정보를 입력 받아, 그 값으로 초기화
    for (int i = 0; i < e; i++) {
        // A에서 B로 가는 비용은 C라고 설정
        int a, b, c;
        cin >> a >> b >> c;
        graph[a][b] = c;
    }
    
    // 점화식에 따라 플로이드 워셜 알고리즘을 수행
    for (int k = 1; k <= v; k++) {
        for (int a = 1; a <= v; a++) {
            for (int b = 1; b <= v; b++) {
                graph[a][b] = min(graph[a][b], graph[a][k] + graph[k][b]);
            }
        }
    }

    // 수행된 결과를 출력
    for (int a = 1; a <= v; a++) {
        for (int b = 1; b <= v; b++) {
            // 도달할 수 없는 경우, 무한(INFINITY)이라고 출력
            if (graph[a][b] == INF) {
                cout << "INFINITY" << ' ';
            }
            // 도달할 수 있는 경우 거리를 출력
            else {
                cout << graph[a][b] << ' ';
            }
        }
        cout << '\n';
    }
}



}

<입력 예시>
4
7
1 2 4
1 4 6
2 1 3
2 3 7
3 1 5
3 4 4
4 3 2

<출력 예시>
0  4 8 6
3  0 7 9
5  9 0 4
7 11 2 0
