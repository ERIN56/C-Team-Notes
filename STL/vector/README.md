## vector

|생성자 ||
|:----------|:----------|
| vector v        | 빈 컨테이너이다. |
| vector v(n)     | 기본값으로 초기화된 n 개의 원소를 갖는다. |
|vector v(n, x)   | x 값으로 초기화된 n 개의 원소를 갖는다. |
|vector v(v2)     | v2 컨테이너 복사본이다. (복사 생성자 호출)  |
|vector v(b, e)   | 반복자 구간 \[b, e) 로 초기화된 원소를 갖는다. |
</br>

|멤버 함수||
|:----------|:----------|
| v.assign(n, x)   | x 값으로 n 개의 원소를 할당한다. |
| v.assign(b, e)   | 반복자 구간 \[b, e)를 할당한다. |
| q = v.insert(p, x) | p 가 가리키는 위치에 x 값을 삽입한다. q 는 삽입한 원소를 가리키는 반복자이다. |
| v.insert(p, n, x) | p 가 가리키는 위치에 n 개의 x 값을 삽입한다. |
| v.insert(p, b, e) | p 가 가리키는 위치에 반복자 구간 \[b, e) 원소를 삽입한다. |
| v.at(i)          | i 번째 요소를 참조한다. |
| v.back()         | 마지막 원소를 참조한다. (반복자 X) |
| v.front()        | 첫 번째 원소를 참조한다. (반복자 X) |
| p = v.begin()    | p 는 첫 원소를 가리키는 반복자이다. |
| p = v.end()       | p 는 끝 을 가리키는 반복자이다. |
| p = v.rbegin() | p 는 역 순차열의 첫 원소를 가리키는 반복자이다. |
| p = v.rend() | p 는 역 순차열의 끝 을 가리키는 반복자이다. |
| v.clear()       | 모든 원소를 제거한다. |
| v.empty()       | 비었는지 조사한다. |
| q = v.erase(p)  | p 가 가리키는 원소를 제거한다. q 는 다음 원소를 가리킨다. |
| q = v.erase(b, e) | 반복자 구간 \[b, e)의 모든 원소를 제거한다. q 는 다음 원소를 가리킨다. |
| x = v.max_size()  | x 는 v 가 담을 수 있는 최대 원소의 개수다.(메모리 크기) |
| x = v.capacity() | x 는 할당된 공간의 크기이다. |
| v.pop_back()    | 마지막 원소를 제거한다. |
| v.push_back(x)  | 끝에 x 를 추가한다. |
| v.reserve(n) | n 개의 원소를 저장할 공간을 예약한다. |
| v.resize(n) | 크기를 n 으로 변경하고 확장되는 공간을 기본값으로 초기화한다. |
| v.resize(n, x) | 크기를 n 으로 변경하고 확장되는 공간을 x 값으로 초기화한다. |
| v.size() | 원소의 개수다. |
| v.swap(v2) | v 와 v2 를 swap 한다. |
| reverse(v.b, v.e) | 원소를 뒤집는다. |
| p = lower_bound(v.b, v.e, sz) | p 는 sz 의 시작 원소를 가리키는 반복자이다. |
| p = upper_bound(v.b, v.e, sz) | p 는 k 의 끝 을 가리키는 반복자이다. |
| [count(v.b, v.e, i)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/vector/count.cpp) | 구간 \[b,e) 에서 i 의 개수를 반환한다. |
| [find(b, e, sz)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/vector/find(b%2C%20e%2C%20sz).cpp) | v에서 문자열 sz 를 찾아 반복자 반환 |
| p = min_element(b, e) | 구간 \[b,e) 안에 가장 작은 원소를 가리키는 반복자를 반환한다. |

</br>

|연산자||
|:----------|:----------|
| v1 == v2 | v1 과 v2 의 모든 원소가 같은가? |
| v1 != v2 | v1 과 v2 의 모든 원소 중 하나라도 다른 원소가 있는가? |
| v1 < v2 | 문자열 비교처럼 v2 가 v1 보다 큰가? |
| v1 <= v2 |
| v1 > v2 |
| v1 >= v2 |
| v\[i] | i 번째 요소를 참조한다. |





