// C++ implementation of program
#include<bits/stdc++.h>
using namespace std;

// Fills initial values in rows[] and cols[]
void preprocessMatrix(int rows[], int cols[],
					int m, int n)
{
	// Fill rows with 1 to m-1
	for (int i=0; i<m; i++)
		rows[i] = i;

	// Fill columns with 1 to n-1
	for (int i=0; i<n; i++)
		cols[i] = i;
}

// Function to perform queries on matrix
// m --> number of rows
// n --> number of columns
// ch --> type of query
// x --> number of row for query
// y --> number of column for query
void queryMatrix(int rows[], int cols[], int m,
				int n, char ch, int x, int y)
{
	// perform queries
	int tmp;
	switch(ch)
	{
	case 'R':

		// swap row x with y
		swap(rows[x-1], rows[y-1]);
		break;

	case 'C':

		// swap column x with y
		swap(cols[x-1], cols[y-1]);
		break;

	case 'P':

		// Print value at (x, y)
		printf("value at (%d, %d) = %d\n", x, y,
				rows[x-1]*n + cols[y-1]+1);
		break;
	}
	return ;
}

// Driver program to run the case
int main()
{
	int m = 1234, n = 5678;

	// row[] is array for rows and cols[]
	// is array for columns
	int rows[m], cols[n];

	// Fill initial values in rows[] and cols[]
	preprocessMatrix(rows, cols, m, n);

	queryMatrix(rows, cols, m, n, 'R', 1, 2);
	queryMatrix(rows, cols, m, n, 'P', 1, 1);
	queryMatrix(rows, cols, m, n, 'P', 2, 1);
	queryMatrix(rows, cols, m, n, 'C', 1, 2);
	queryMatrix(rows, cols, m, n, 'P', 1, 1);
	queryMatrix(rows, cols, m, n, 'P', 2, 1);
	return 0;
}
