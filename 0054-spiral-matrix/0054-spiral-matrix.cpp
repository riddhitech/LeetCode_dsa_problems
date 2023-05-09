class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      
        vector<int> ans;
        int i , j;
        int r = matrix.size();
        int c = matrix[0].size();
        int flag = 4;
        for(int cnt = 0 ; cnt <= r/2 ; cnt++){
     // forward
             i = 0 + cnt;
            if(flag == 4){
            for(j = 0 + cnt ; j < c - cnt ; j++){
                ans.push_back(matrix[i][j]);
                flag = 0;
            }
        }
            j = j-1;
          
    // downward
        if(flag == 0){
            for(i = 1 + cnt ; i < r - cnt ; i++){
                 ans.push_back(matrix[i][j]);
                 flag = 1;
            }
        }
            i = i-1;
            j = j-1;
    // backward
            if(flag == 1){
            for( ; j >= 0 + cnt ; j--){
                ans.push_back(matrix[i][j]);
                flag = 2;
            }     
        }
            i = i-1;
            j = j+1;
    // upward
            if(flag == 2){
            for( ; i >= 1 + cnt ; i--){
                ans.push_back(matrix[i][j]);
                flag = 4;
            }
        } 
        }
        return ans;
    }
};