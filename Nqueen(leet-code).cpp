// class Solution {
// public:
//     vector<string> kq(int N, int X[]) {
//         vector<string> k;
//         k.push_back(" ");
//         string s = "";
//         for (int i = 1; i <= N; i++) s += ".";
//         for (int i = 1; i <= N; i++) k.push_back(s);
//         for (int i = 1; i <= N; i++) {
//             k[i][X[i]-1] = 'Q';
//         }
//         k.erase(k.begin());
//         return k;
//     } 
//     void Try(int i, int N, int X[], bool cot[], bool d1[], bool d2[], vector<vector<string>> &result) {
//         for (int j = 1; j <= N; j++) {
//             if (cot[j] == 1 && d1[i-j+N] == 1 && d2[i+j-1]==1) {
//                 X[i] = j; 
//                 cot[j] = d1[i-j+N] = d2[i+j-1] = 0;
//                 if (i == N) {
//                     vector<string> r = kq(N, X);
//                     result.push_back(r);
//                 }
//                 else {
//                     Try(i+1, N, X, cot, d1, d2, result);
                        
//                 }
//                 cot[j] = d1[i-j+N] = d2[i+j-1] = 1;
//             }
//         }
        
//     }
//     vector<vector<string>> solveNQueens(int n) {
//         int X[100];
//         bool cot[100], d1[100], d2[100];
//         memset(cot, 1, sizeof(cot));
//         memset(d1, 1, sizeof(d1));
//         memset(d2, 1, sizeof(d2));
//         vector<vector<string>> result; 
//         Try(1, n, X, cot, d1, d2, result);
//         return result;
//     }
// };