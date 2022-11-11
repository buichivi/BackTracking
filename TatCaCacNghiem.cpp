#include <bits/stdc++.h>
using namespace std;
int N, K;
int a[100];
void inkq() {
	for (int i = 1; i <= N; i++)
		cout << a[i] << ' ';
	cout << endl;
} 
void Try(int i, int k, int sum) {	
	for (int j = k; j >= 0; j--) {
		sum += j;
		a[i] = j;
		if (i == N) {
			if (sum == K) { // or a[i] == k
				inkq();
			}
		}
		else Try(i+1, k - j, sum);
		sum -= j;
	}
}
int main() {
	freopen("input2.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	cin >> N >> K;
	Try(1, K, 0);
	return 0;
}
