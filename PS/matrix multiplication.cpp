* arr1의 열 == arr2의 행

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer(arr1.size());
    
    for(int i=0; i<arr1.size(); i++){
        
        for(int j=0; j<arr2[0].size(); j++){
            int sum=0;
            for(int k=0; k<arr1[0].size(); k++){
                sum+=arr1[i][k] * arr2[k][j];
            }
            answer[i].push_back(sum);
        }

    }
    return answer;
}



//arr1	                     / arr2	             / return
//[[1, 4], [3, 2], [4, 1]]	/ [[3, 3], [3, 3]]	/ [[15, 15], [15, 15], [15, 15]]
//[[2, 3, 2], [4, 2, 4], [3, 1, 4]]	[[5, 4, 3], [2, 4, 1], [3, 1, 1]]	[[22, 22, 11], [36, 28, 18], [29, 20, 14]]

[2, 3, 2]     [5, 4, 3]        [22, 22, 11]         [2*5 + 3*2 + 2*3 , 2*4 + 3*4 + 2*1 , 
[4, 2, 4]     [2, 4, 1]        [36, 28, 18]
[3, 1, 4]     [3, 1, 1]        [29, 20, 14]
