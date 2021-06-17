2020 KAKAO BLIND RECRUITMENT > 자물쇠와 열쇠
https://programmers.co.kr/learn/courses/30/lessons/60059


void rotate90degree(vector<vector<int>>& key){
    int m = key.size();
    vector<vector<int>> temp(m, vector<int>(m, 0));
    
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            temp[i][j] = key[m-1-j][i];
        }
    }
    key = temp;
}