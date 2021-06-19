## string
* 시퀀스 컨테이너이며 배열 기반 컨테이너

| 생성자 ||
|:----------|:----------|
| string s | 기본 생성자로 생성 |
| string s(sz) | sz 문자열로 s 생성 |
| string s(sz, n) | sz 문자열에서 n 개의 문자열로 s 생성 |
| stirng s(n, c) | n 개의 c 문자로 s 생성 |
| string s(iter1, iter2) | 반복자 구간 \[iter1, iter2) 로 s 생성 |
| [string s(p1, p2)](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/string/string%20생성자.cpp) | 포인터 구간 \[p1, p2)의 문자로 s 생성 |
</br>

| 멤버 함수 ||
|:----------|:----------|
| s.append(sz) | s 에 sz 문자열을 붙임 |
| s.assign(sz) | s 에 sz 문자열을 할당 |
| s.insert(n, sz) | n 위치에 sz 를 삽입 |
| s.at(i) | i 번째 문자를 참조 |
| p = s.begin() | p 는 첫 문자를 가리키는 반복자 |
| p = s.end() | p 는 끝을 가리키는 반복자 |
| s.c_str() | c 스타일 (널문자를 포함한) 문자열의 주소 반환 (const char* 형식 반환)|
| s.data() | 문자열의 배열 주소로 반환 (const char* 형식 반환) |
| n = s.capacity() | n 은 s 에 할당된 메모리 크기 |
| s.clear() | 비움 |
| s.compare(s2) | s 와 s2 를 비교 |
| s.copy(but, n) | but 로 n 개의 문자를 복사 |
| s.empty() | 비었는지 조사 |
| q = s.erase(p) | p 가 가리키는 문자를 제거. q 는 다음 원소를 가리킴. |
| q = s.erase(b, e) | 반복자 구간 \[b,e)의 모든 문자를 제거. q 는 다음 원소 |
| s.find(c) | c 문자를 검색 (찾는 문자가 없으면 string::npos 반환)|
| s.find(sz, index) | 문자열 sz 를 index 위치부터 검색 |
| s.length() | 문자의 개수 |
| n = s.max_size() | n 은 s 가 담을 수 있는 최대 문자의 개수 (메모리 크기) |
| s.push_back(c) | s 의 끝에 c 를 추가 |
| p = s.rbegin() | p 는 역 순차열의 첫 원소를 가리키는 반복자 |
| p = s.rend() | p 는 역 순차열의 끝을 가리키는 반복자 |
| s.replace(pos, n, sz) | pos 위치의 n 개의 문자를 sz 로 바꿈 |
| s.reserve(n) | n 개의 문자를 저장할 공간을 예약 |
| s.resize(n) | 크기를 n 으로 변경하고 확장되는 공간의 값을 기본값으로 초기화 |
| s.resize(n, c) | 크기를 n 으로 변경하고 확장되는 공간의 값을 c 로 초기화 |
| s.refind(c) | c 문자를 끝부터 찾음 |
| s.size() | 원소의 개수 |
| s2 = s.substr(pos) | s2 는 pos 부터 끝까지의 s 문자열 |
| s.swap(s2) | s 와 s2 를 swap |

| 연산자 ||
|:----------|:----------|
| s\[i] | i 번째의 문자 참조 |
| s+=s2 | s 와 s2 의 합을 s 에 할당 |
| s+s2 | s 와 s2 를 합한 새로운 string 객체 |
| s=s2 | s2를 s에 할당 |
| cout<<s | s 를 stream 에 씀 |
| in>>s | stream 에서 s 로 읽음 |
| getline(in, s) | 스트림에서 s 로 한 줄을 읽음 |
| 그외 비교 연산 | ==, !=, <, >, <=, >= |

