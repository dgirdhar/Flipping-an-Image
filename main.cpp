class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (int i = 0; i < A.size(); ++i) {
            int j = 0;
            int k = A[i].size() - 1;
            
            while (j <= k) {
                int temp = A[i][j] == 0 ? 1 : 0;
                
                A[i][j] = A[i][k] == 0 ? 1 : 0;
                A[i][k] = temp;
                j++;
                k--;
            }
        }
        
        return A;
    }
};
