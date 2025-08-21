class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0)    continue;
                if(i>0) mat[i][j]+=mat[i-1][j];
            }
        }
        int ans = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int mn = m;
                for(int k = j;k>=0;k--){
                    mn = min(mn,mat[i][k]);
                    ans+=mn;
                }
            }
        }
        return ans;
    }
};
