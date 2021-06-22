## map

| map | multimap| unordered_map | unordered_multimap |
|:----------|:----------|:----------|:----------|
|#include \<map> </br> map\<int, int> m; | #include \<map> </br> multimap\<int, int> mm; | #include \<ordered_map> </br> unordered_map\<int, int> m; | #include \<unordered_map> </br> unordered_multimap\<int, int> mm; |

* map도 연관 컨테이너이므로 set과 같은 인터페이스 멤버 함수를 제공하며, 템플릿 형식과 내장 멤버 형식만이 약간의 차이를 보입니다.특히, map은 \[] 연산자를 제공하여 key에 해당하는 원소의 value에 쉽게 접근하거나 변경할 수 있습니다.
* map은 set처럼 컨테이너에 원소(key, value의 쌍)을 제공하는 유일한 멤버 함수 insert()를 제공합니다. 

| 연산자 ||
|:---------|:----------|
| m\[k] = v | m 컨테이너에 원소 (k, v)를 추가하거나 key 에 해당하는 원소의 value 값을 v 로 갱신한다. |
| [m.insert(pr(a, b))](https://github.com/ERIN56/Cpp-Team-Notes/blob/master/STL/map/insert().cpp) | m 컨테이너에 pair 객체를 삽입한다. |


## multimap
* 중복 key를 허용하는 multimap은 \[] 연산자를 제공하지 않습니다.   
