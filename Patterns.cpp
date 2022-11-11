#include <bits/stdc++.h>
using namespace std;

/**
*Print:	*****
*		****
*		***
*		**
*		*
*/
void DrawPattern1(int n) {
	int ROW = n;
	int COL = ROW;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cout << '*';
		}
		COL--;
		cout << endl;
	}
}
/**
*	Print: 	*
* 			**
* 			***
* 			****
* 			*****
*/
void DrawPattern2(int n) {
	int ROW = n;
	for (int i = 1; i <= ROW; i++) {
		for (int j = i; j >= 1; j--) {
			cout << '*';
		} 
		cout << endl;
	}
}
/**
*
*	Print: 		*
*			   **
* 			  ***
* 			 ****
* 			*****
*/
void DrawPattern3(int n) {
	int ROW = n;
	int COL = ROW;
	int L = 1;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL - 1; j++) 
			cout << ' ';
		for (int k = 0; k < L; k++)
			cout << '*';
		COL--;
		L++;
		cout << endl;
	}
}
/**
*
*	Print: *****
* 			****
* 			 ***
*			  **
*			   *
*/
void DrawPattern4(int n) {
	int ROW = n;
	int COL = 1;
	int L = n;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cout << ' ';
		}
		for (int k = 0; k < L; k++) {
			cout << '*';
		}
		COL++;
		L--;
		cout << endl;
	}
}
/**
*	Print:      *
* 			   ***
* 			  *****
* 			 *******
* 			*********
*/
void DrawPattern5(int n) {
	int ROW = n;
	int COL = n - 1;
	int L = 1;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++)
			cout << ' ';
		for (int k = 0; k < L; k++)
			cout << '*';
		COL--;
		L += 2;
		cout << endl;
	}
}
/**
*	Print: *********
* 			*******
* 			 *****
* 			  ***
* 			   *
*/
void DrawPattern6(int n) {
	int ROW = n;
	int COL = 2*n-1;
	int L = 0;
	int R = 2*n;
	for (int i = 1; i <= ROW; i++) {
		for (int j = 1; j <= COL; j++) {
			if (j > L && j < R)
				cout << '*';
			else cout << ' ';
		}	
		L++;
		R--;
		cout << endl;
	}
}

/**
*	Print:  *
* 			**
* 			***
* 			****
* 			*****
* 			****
* 			***
* 			**
* 			*
*/
void DrawPattern7(int n) {
	int ROW = 2*n-1;
	int ROW_1 = 1;
	int ROW_2 = n;
	for (int i = 1; i <= ROW; i++) {
		if (i < ROW/2 + 1) {
			for (int j = 0; j < ROW_1; j++) {
				cout << '*';
			}
			ROW_1++;
			cout << endl;
		}
		else {
			for (int j = 0; j < ROW_2; j++) {
				cout << '*';
			}
			ROW_2--;
			cout << endl;
		}
	}
}
/**
*
*	Print: 		*
* 			   **
* 			  ***
* 			 ****
* 			*****
* 		     ****
* 			  ***
* 			   **
* 			    *
*/
void DrawPattern8(int n) {
	int ROW = 2*n-1;
	int ROW_1 = 1;
	int ROW_2 = n;
	for (int i = 1; i <= ROW; i++) {
		if (i < ROW/2 + 1) {
			for (int j = 0; j < n-i; j++) {
				cout << ' ';
			}
			for (int j = 0; j < ROW_1; j++)
				cout << '*';
			ROW_1++;
			cout << endl;
		}
		else {
			for (int j = 0; j < i-n; j++) 
				cout << ' ';
			for (int j = 0; j < ROW_2; j++) 
				cout << '*';
			ROW_2--;
			cout << endl;
		}
	}
}
/**
*	Print:   	*
* 			   * *
* 			  * * *
* 			 * * * * 
* 		    * * * * * 
*/
void DrawPattern9(int n) {
	int ROW = n;
	int COL = n - 1;
	int L = 1;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cout << ' ';
		}
		for (int j = 0; j < L; j++)
			if (j % 2 == 0)
				cout << '*';
			else cout << ' ';
		L += 2;
		COL--;
		cout << endl;
	}
}
/**
*	Print: * * * * *
*			* * * *
* 			 * * *
* 			  * *
* 			   *
*/
void DrawPattern10(int n) {
	int ROW = n;
	int COL_1 = 0;
	int COL_2 = 2*n - 1; 
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL_1; j++) {
			cout << ' ';
		}
		for (int j = 0; j < COL_2; j++) {
			if (j % 2 == 0)
				cout << '*';
			else cout << ' ';
		}
		COL_2 -= 2;
		COL_1++;
		cout << endl;

	}
}
/**
*	Print: 	   *
* 			  * * 
* 			 * * * 	
*			* * * *  			
*          * * * * *
*			* * * *
* 			 * * *
* 			  * *
* 			   *
*/
void DrawPattern11(int n) {
	int ROW = 2*n - 1;
	int COL_1 = n - 1;
	int COL_2 = 0;
	int L_1 = 1;
	int L_2 = 2*n - 1;
	for (int i = 1; i <= ROW; i++) {
		if (i < ROW/2 + 1) {
			for (int j = 0; j < COL_1; j++) 
				cout << ' ';
			for (int j = 0; j < L_1; j++) {
				if (j % 2 == 0)
					cout << '*';
				else cout << ' ';
			}
			COL_1--;
			L_1 += 2;
			cout << endl;
		}
		else {
			for (int j = 0; j < COL_2; j++) 
				cout << ' ';
			for (int j = 0; j < L_2; j++) {
				if (j % 2 == 0)
					cout << '*';
				else cout << ' ';
			}
			L_2 -= 2;
			COL_2++;
			cout << endl;
		}
	}
}
/**
*	Print: * 	    *
* 		   **	   **
* 		   ***    ***
* 		   ****  ****
*		   **********
* 		   ****  **** i = 6
* 		   ***    *** i = 7
* 		   **	   ** i = 8
* 		   *	    * i = 9
*/
void DrawPattern12(int n) {
	int ROW = 2*n - 1;
	int COL_1 = 2*n;
	for (int i = 1; i <= ROW; i++) {
		if (i <= ROW/2 + 1) {
			for (int j = 0; j < COL_1; j++) {
				if (j < i || j >= COL_1 - i)
					cout << '*';
				else cout << ' ';
			}
			cout << endl;
		}
		else {
			for (int j = 0; j < COL_1; j++) {
				if (j < COL_1 - i || j >= i)
					cout << '*';
				else cout << ' ';
			}
			cout << endl;
		}
	}
}
/**
*   Print:      **
*           	**
* 			    ****
* 		        ****
* 				******
* 			    ******
*/

void DrawPattern13(int n) {
	int ROW = n;
	int L = 0;
	for (int i = 1; i <= ROW; i++) {
		if (i % 2 != 0) {
			L += 2;
		}
		for (int j = 0; j < L; j++) {
			cout << '*';
		}
		cout << endl;
	}
}

/**
*		Print:    **   **
* 			     **** ****
*				 *********
*				  *******
* 				   *****
* 					***
* 					 *
*/
void DrawPattern14(int n) {
	int ROW = n;
	int COL = 2*n - 1;
	int L_1 = n/2 - 1;
	int R_1 = n+1 - (n/2);
	int L_2 = n/2 + n-1;
	int R_2 = n + 2 + n/2;
	int L_3 = 0;
	int R_3 = 2*n;
	for (int i = 1; i <= ROW + ROW/2; i++) {
		if (i >= 1 && i <= ROW/2) {
			for (int j = 1; j <= COL/2+1; j++) {
				if (j > L_1 && j < R_1)
					cout << '*';
				else cout << ' ';
			}
			R_1++;
			L_1--;
			for (int j = COL/2+2; j <= COL; j++) {
				if (j > L_2 && j < R_2)
					cout << '*';
				else cout << ' ';
			}
			L_2--;
			R_2++;
			cout << endl;
		}
		else {
			for (int j = 1; j <= COL; j++) {
				if (j > L_3 && j < R_3) {
					cout << '*';
				}
				else cout << ' ';
			}
			L_3++;
			R_3--;
			cout << endl;
		}

	}
}
/**
*	Print:     *		n = 4 			    *	 		n = 3        *		n = 5
* 			  * *						   * *						* * 
* 			 * * *						  * * * 				   * * * 	
* 		    * * * * 					   * * 					  *	* * * 	
* 			 * * *						  * * * 			     * * * * * 	
*			* * * *						 * * * * 				  *	* * * 
* 		   * * * * * 					  * * * 				 * * * * *	 
* 		  * * * * * * 					 * * * * 				* * * * * * 
* 		   * * * * * 					* * * * * 			   * * * * * * * 	 
* 		  * * * * * * 					  * * *				  * * * * * * * *
* 		 * * * * * * * 					  * * * 			   * * * * * * *
* 		* * * * * * * * 				  * * * 			  * * * * * * * * 
* 			* * * * 										 * * * * * * * * * 
* 			* * * * 										* * * * * * * * * * 
* 			* * * * 									   * * * * * * * * * * * 
* 			* * * *												 * * * * * 
* 																 * * * * * 
* 																 * * * * * 
* 																 * * * * * 
* 																 * * * * * 
* 
*/
void DrawPattern15(int n) {
	int ROW = n*4;
	int COL = 2*n - 1 + 4*(n - 2);
	int L_1 = COL/2 + 1;
	int R_1 = 1;
	int L_2 = L_1 - n + 2;
	int R_2 = 2*n - 1 - 2;
	int L_3 = L_2 - n + 2;
	int R_3 = COL - 2*(L_3-1);
	int L_4 = L_1 - n + 1;
	int R_4 = 2*n - 1;
	for (int i = 1; i <= ROW; i++) {
		if (i >= 1 && i <= n) {
			for (int j = 1; j <= L_1; j++) 
				cout << ' ';
			for (int j = 1; j <= R_1; j++) {
				if (j % 2 != 0) 
					cout << '*';
				else cout << ' ';
			}			
			L_1--;
			R_1+=2;
			cout << endl;
		}
		if (i >= n + 1 && i <= 2*n) {
			for (int j = 1; j <= L_2; j++) 
				cout << ' ';
			L_2--;
			for (int j = 1; j <= R_2; j++) {
				if (j % 2 != 0) 
					cout << '*';
				else cout << ' ';
			}
			R_2+=2;
			cout << endl;
		}
		if (i >= 2*n + 1 && i <= 3*n) {
			for (int j = 1; j <= L_3; j++) 
				cout << ' ';
			L_3--;
			for (int j = 1; j <= R_3; j++) {
				if (j % 2 != 0)
					cout << '*';
				else cout << ' ';
			}
			R_3+=2;
			cout << endl;
		}
		if (i >= 3*n + 1 && i <= 4*n) {
			for (int j = 1; j <= L_4; j++) 
				cout <<' ';
			for (int j = 1; j <= R_4; j++) {
				if (j % 2 != 0)
					cout << '*';
				else cout << ' ';
			}
			cout << endl;
		}
	}
}



int main() {
	// DrawPattern1(5);
	// DrawPattern2(5);
	// DrawPattern3(5);
	// DrawPattern4(5);
	// DrawPattern5(5);
	// DrawPattern6(5);
	// DrawPattern7(5);
	// DrawPattern8(5);
	// DrawPattern9(5);
	// DrawPattern10(5);
	// DrawPattern11(5);
	// DrawPattern12(5);
	// DrawPattern13(5);
	// DrawPattern14(5);
	DrawPattern15(5);
	return 0;
}