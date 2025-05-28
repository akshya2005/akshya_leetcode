class Solution {
public:
    void rotate90(vector<vector<int>>& mat, int n) {
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }
        for(int i = 0; i < n; i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
    }
    
    void rotate180(vector<vector<int>>& mat, int n) {
        reverse(mat.begin(), mat.end());
        for(int i = 0; i < n; i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
    }
    
    void rotate270(vector<vector<int>>& mat, int n) {
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }
        reverse(mat.begin(), mat.end());
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        
        // 0-degree rotation
        if (mat == target) return true;
        
        rotate90(mat, n);
        
        if (mat == target) return true;
        
        rotate180(mat, n);
       
        if (mat == target) return true;
        
        rotate270(mat, n);
        
        if (mat == target) return true;
        
        return false;
    }
};