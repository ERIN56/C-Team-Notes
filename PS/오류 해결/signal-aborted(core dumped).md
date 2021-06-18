 ### 1. vector나 배열에서 없는 인덱스에 접근하려 할때   

    ex) 주로 없는 인덱스를 erase하려 하거나, 없는 인덱스를 수정하거나 읽으려할때 core dumped가 뜬다.

 ### 2. 자료형의 크기를 벗어나는 값을 입력하려 할때

    ex) int 형의 변수에 2^32승이 넘는 값을 입력하려 할때. long long으로 바꾸면 해결가능.

  * stoi를 long long크기의 변수에 시행. stoi대신 stoull로 바꾸자 core dumped가 해결
  

</br>

###### [출처] 코딩테스트(C++)Level2-카카오-수식 최대화|작성자 태엽로봇


