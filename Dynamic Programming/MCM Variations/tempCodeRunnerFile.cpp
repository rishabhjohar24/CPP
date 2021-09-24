int palindromePartitioning(string s, int i, int j){
//     if(i >= j){
//         return 0;
//     }
//     if(ispalindrome(s, i, j)){
//         return 0;
//     }
//     int temp, m_n = INT_MAX;
//     for(int k = i; k < j; k++){
//         temp = palindromePartitioning(s, i, k) + palindromePartitioning(s, k + 1, j) + 1;
//         m_n = min(temp, m_n);
//     }
//     return m_n;
// }