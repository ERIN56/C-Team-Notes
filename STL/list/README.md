## list

|생성자 ||
|:----------|:----------|
| list lt        | 빈 컨테이너이다. |
| list lt(n)     | 기본값으로 초기화된 n 개의 원소를 갖는다. |
| list lt(n, x)   | x 값으로 초기화된 n 개의 원소를 갖는다. |
| list lt(lt2)     | lt2 컨테이너 복사본이다. (복사 생성자 호출)  |
| list lt(b, e)   | 반복자 구간 \[b, e) 로 초기화된 원소를 갖는다. |
</br>

|멤버 함수||
|:----------|:----------|
| lt.assign(n, x)   | x 값으로 n 개의 원소를 할당한다. |
| lt.assign(b, e)   | 반복자 구간 \[b, e)를 할당한다. |
| q = lt.insert(p, x) | p 가 가리키는 위치에 x 값을 삽입한다. q 는 삽입한 원소를 가리키는 반복자이다. |
| lt.insert(p, n, x) | p 가 가리키는 위치에 n 개의 x 값을 삽입한다. |
| lt.insert(p, b, e) | p 가 가리키는 위치에 반복자 구간 \[b, e) 원소를 삽입한다. |
| lt.back()         | 마지막 원소를 참조한다. |
| lt.front()        | 첫 번째 원소를 참조한다. |
| p = lt.begin()    | p 는 첫 원소를 가리키는 반복자이다. |
| p = lt.end()       | p 는 끝 을 가리키는 반복자이다. |
| p = lt.rbegin() | p 는 역 순차열의 첫 원소를 가리키는 반복자이다. |
| p = lt.rend() | p 는 역 순차열의 끝 을 가리키는 반복자이다. |
| lt.clear()       | 모든 원소를 제거한다. |
| lt.empty()       | 비었는지 조사한다. |
| q = lt.erase(p)  | p 가 가리키는 원소를 제거한다. q 는 다음 원소를 가리킨다. |
| q = lt.erase(b, e) | 반복자 구간 \[b, e)의 모든 원소를 제거한다. q 는 다음 원소를 가리킨다. |
| x = lt.max_size()  | x 는 lt 가 담을 수 있는 최대 원소의 개수다.(메모리 크기) |
| lt.pop_back()    | 마지막 원소를 제거한다. |
| lt.pop_front() | 첫 번째 원소를 제거한다. |
| lt.push_back(x)  | 끝에 x 를 추가한다. |
| lt.push_front(x) | 앞에 x 를 추가한다. |
| lt.resize(n) | 크기를 n 으로 변경하고 확장되는 공간을 기본값으로 초기화한다. |
| lt.resize(n, x) | 크기를 n 으로 변경하고 확장되는 공간을 x 값으로 초기화한다. |
| lt.size() | 원소의 개수다. |
| lt.swap(lt2) |  lt와 lt2 를 swap 한다. |
| lt.merge(lt2) | lt2를 lt로 합병정렬 한다.(오름차순) |
| lt.merge(lt2, pred) | lt2를 lt로 합병 정렬한다. pred(조건자)를 기준으로 (pred는 이항 조건자) |
| [lt.remove(x)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/list/remove().cpp) | x 원소를 모두 제거한다. |
| [lt.remove_if(pred)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/list/remove_if().cpp) | pred(단항 조건자)가 '참'인 모든 원소를 제거한다. |
| lt.reverse() | 순차열을 뒤집는다. |
| lt.sort() | 모든 원소를 오름차순으로 정렬한다. |
| lt.sort(pred) | 모든 원소를 pred(조건자) 기준으로 정렬한다. (pred는 이항 조건자) |
| lt.splice(p, lt2) | p 가 가리키는 위치에 lt2 의 모든 원소를 잘라 붙인다. |
| lt.splice(p, lt2, q) | p 가 가리키는 위치에 lt2 의 q 가 가리키는 원소를 잘라 붙인다. |
| lt.splice(p, lt2, b, e) | p 가 가리키는 위치에  lt2 의 순차열 \[b, e)를 잘라 붙인다. |
| [lt.unique()](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/list/unique().cpp) | 인접한 원소의 값이 같다면 유일한 원소의 순차열로 만든다. |
| [lt.unique(pred)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/list/unique(pred).cpp) | 인접한 원소가 pred(이항 조건자)의 기준에 맞다면 유일한 원소의 순차열로 만든다. |
</br>

|연산자||
|:----------|:----------|
| lt1 == lt2 | lt1 과 lt2 의 모든 원소가 같은가? |
| lt1 != lt2 | lt1 과 lt2 의 모든 원소 중 하나라도 다른 원소가 있는가? |
| lt1 < lt2 | 문자열 비교처럼 lt1 가 lt2 보다 큰가? |
| lt1 <= lt2 |
| lt1 > lt2 |
| lt1 >= lt2 |





