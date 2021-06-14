
## Set
* 컨테이너에 원소(Key)를 저장(삽입)하는 유일한 멤버 함수 insert()를 제공합니다.
* set은 모든 원소(Key)가 유일합니다. 원소의 중복을 허용해야 한다면 multiset을 사용해야 합니다.
* 시퀀스 컨테이너가 제공하는 순서와 관련된 함수류인 push_back(), push_front(), pop_back(), pop_front(), front(), back() 를 제공하지 않습니다.
* 연관 컨테이너는 균형 이진 트리를 사용하므로 찾기 연산(find(), lower_bound(), upper_bound(), equal_range(), count()) 에 뛰어난 성능 (로그 시간)을 보이며, insert() 멤버 함수를 이용한 삽입도 로그 시간 복잡도를 보입니다.
</br>

| 템플릿 형식 ||
|:----------|:----------|
| template < typename Key, typename Pred = less\<Key>, typename Allocator = allocator\<Key> > class set | Key 는 set 컨테이너 원소의 형식이며, Pred 는 set 의 정렬 기준인 조건자이다. 기본 조건자는 less 이다. |

| 생성자 ||
|:----------|:----------|
| set s | 빈 컨테이너이다. |
| set s(pred) | 빈 컨테이너로 정렬 기준은 pred 조건자를 사용한다. |
| set s(s2) | s2 컨테이너의 복사본이다. (복사 생성자 호출) |
| set s(b,e) | 반복자 구간 \[b,e) 로 초기화된 원소를 갖는다. |
| set s(b, e, pred) | 반복자 구간 \[b,e)로 초기화된 원소를 갖는다. 기준은 pred 조건자를 사용한다. |
</br>

| 멤버 함수 || 
|:----------|:----------|
| p = s.begin() | p 는 첫 원소를 가리키는 반복자이다. |
| p = s.end() | p 는 끝을 가리키는 반복자이다. |
| p = s.rbegin() | p 는 역 순차열의 첫 원소를 가리키는 반복자이다. |
| p = s.rend() | p 는 역 순차열의 끝을 가리키는 반복자이다. |
| s.clear() | 모든 원소를 제거한다. |
| n = s.count(k) | 원소 k 의 개수를 반환한다. |
| s.empty() | 비었는지 조사한다. |
| pr = s.equal_range(k) | pr 은 k 원소의 반복자 구간인 pair 객체이다. |
| p = s.lower_bound(k) | p 는 k 의 시작 구간을 가리키는 반복자이다. |
| p = s.upper_bound(k) | p 는 k 의 끝 구간을 가리키는 반복자이다. |
| q = s.erase(p) | p 가 가리키는 원소를 제거한다. q 는 다음 원소를 가리킨다. |
| q = s.erase(b,e) | 반복자 구간 \[b,e) 의 모든 원소를 제거한다. |
| n = s.erase(k) | k 원소를 모두 제거한다. n 은 제거한 개수다. |
| p = s.find(k) | p 는 k 원소의 위치를 가리키는 반복자이다. |
| pr = s.insert(k) | k 를 삽입한다. pr 은 삽입한 원소를 가리키는 반복자와 성공 여부의 bool 값인 pair 객체이다. |
| q = s.insert(p, k) | p 가 가리키는 위치부터 빠르게 k 를 삽입한다. q 는 삽입한 원소를 가리키는 반복자이다. |
| s.insert(b, e) | 반복자 구간 \[b,e) 원소를 삽입한다.
| pred = s.key_comp() | pred 는 key 정렬 기준 조건자이다. |
| pred = s.value_comp() | pred 는 value 정렬 기준 조건자이다. |
| n = s.max_size() | n 은 s 가 담을 수 있는 최대 원소의 개수이다. (메모리 크기) |
| s.size() | 원소의 개수이다. |
| s.swap(s2) | s 와 s2 를 swap한다. |

| 연산자 ||
|:----------|:----------|
| s1 == s2 | s1 과 s2 의 모든 원소가 같은가? |
| s1 != s2 | s1 과 s2 의 모든 원소 중 하나라도 다른 원소가 있는가? |
| s1 < s2 | 문자열 비교처럼 s2 가 s1 보다 큰가? |
| s1 <= s2 |
| s1 > s2 |
| s1 >= s2 |


