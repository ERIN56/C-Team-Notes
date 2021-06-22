## 소수점

* double 은 7 자리 이상 숫자는 반올림하여 6자리까지 출력 
` ex) double t = 57.14288 -> 57.1429, double t = 157.1428 -> 157.143 `
</br>

* 결과 값을 반올림하여 소수 셋째 자리까지 출력   
` printf("%0.3f\n", answer) `
</br>

* precision(n)
```
  * 반올림하여 n 개의 숫자 출력 (정수 포함) 
  ex)  cout<<5.666<<endl;  -> 5.666
       cout.precision(1);  
       cout<<5.666<<endl;  -> 6
       
  * 소수점 고정
        cout.setf(ios::fixed);//소수점 고정
        cout.precision(6);//소수 점 아래 6자리 출력
        cout << 10.23;                  -> 10.230000
        cout.unsetf(ios::fixed);//소수점 고정 해제
        cout << ' ' << 10.23;//         -> 10.23
  
```
</br>

* round() : 소수 첫째 자리에서 반올림
```
round(3.2)는 -> 3이 반환
round(3.7)은 -> 4가 반환

<음수>
round(-3.2)는 -> -3이 반환
round(-3.7)은 -> -4가 반환
```
