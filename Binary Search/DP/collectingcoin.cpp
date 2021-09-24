int solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    int t[n + 1][m + 1];
    memset(t, 0, sizeof(t));
    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < m + 1; j++){
            t[i][j] = matrix[i - 1][j - 1] + max(t[i - 1][j], t[i][j - 1]);
        }
    }
    return t[n][m];
}