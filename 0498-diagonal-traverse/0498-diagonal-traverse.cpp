class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
         vector<int> ans ; 
        map<int,vector<int>> m ; 
        for(int i = 0 ; i < mat.size() ; i++){
            for(int j = 0 ; j < mat[i].size() ; j++){
                m[i+j].push_back(mat[i][j]) ; 
            }
        }
        int count = 0 ; 
        for (auto i : m) {
            if(count % 2 == 0){
                reverse(i.second.begin(), i.second.end());
            }
            
            for(int j = 0 ; j < i.second.size() ; j++){
                ans.push_back(i.second[j]) ; 
            }
            count ++ ; 
        }

        return ans ; 
            
    }
};