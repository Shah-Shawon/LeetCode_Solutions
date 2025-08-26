class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        long maxDiag = 0, bestArea = 0;

        for (int i = 0; i < n; i++) {
            int l = dimensions[i][0], w = dimensions[i][1];
            long diag = (long)l * l + (long)w * w;
            int area = l * w;

            if (diag > maxDiag || (diag == maxDiag && area > bestArea)) {
                maxDiag = diag;
                bestArea = area;
            }
        }
        return bestArea;
    }
};
