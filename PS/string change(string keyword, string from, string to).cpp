2020 카카오 공채 1차 > 가사 검색 > 문자열 변환 함수
https://programmers.co.kr/learn/courses/30/lessons/60060


string change(string keyword, string from, string to){
    string str = keyword;
    
    int index = 0;   
    while((index=str.find(from, index))!=string::npos){
        str.replace(index, from.size(), to);
        index+=to.size();
    }
    return str;   
}