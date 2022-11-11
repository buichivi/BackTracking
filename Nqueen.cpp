#include <bits/stdc++.h>
using namespace std;
int N, X[100], cot[100], d1[100], d2[100]; 
char a[100][100];
int cnt = 0;

void inkq() {
	memset(a, '-', sizeof(a));
  	for (int i = 1; i <= N; i++) {
		 a[i][X[i]] = 'X';
  	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) 
			cout << a[i][j] << ' ';
		cout << endl;
	}
	cout << endl;
}
void Try(int i) {
	for (int j = 1; j <= N; j++) {
		if (cot[j] == 1 && d1[i - j + N] == 1 && d2[i + j -1] == 1) {
			X[i] = j;
			cot[j] = d1[i - j + N] = d2[i + j - 1] = 0;	
			if (i == N) {
				inkq(); 				
				// cnt++;
			}
			else
				Try(i+1);
			//backtrack
			cot[j] = d1[i - j + N] = d2[i + j - 1] = 1;	
		}
	}
}
void Try(int i, int N, int X[], bool cot[], bool d1[], bool d2[], int &cnt) {
        for (int j = 1; j <= N; j++) {
            if (cot[j] == 1 && d1[i-j+N] == 1 && d2[i+j-1]==1) {
                X[i] = j;
                cot[j] = d1[i-j+N] = d2[i+j-1] = 0;
                if (i == N) 
                    cnt++;
                else
                    Try(i+1, N, X, cot, d1, d2, cnt);
                cot[j] = d1[i-j+N] = d2[i+j-1] = 1;

            }
        }
    }
int main() {
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	cin >> N;
	for(int i = 1; i <= 99; i++) {
		cot[i] = d1[i] = d2[i] = 1;
	}
	Try(1);
	// cout << cnt;
	return 0;
}