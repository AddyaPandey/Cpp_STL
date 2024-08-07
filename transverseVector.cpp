// C++ Program to show how use an Iterator to traverse a vector 
#include <iostream> 
#include <iterator> 
#include <vector> 
using namespace std; 

// Print vector function using iterators 
void printVector(vector<int>& v) 
{ 

	// Create iterator of vector<int> type 
	vector<int>::iterator myItr; 

	// Initialize iterator and begine traversal 
	for (myItr = v.begin(); myItr != v.end(); myItr++) { 
		cout << *myItr << " "; 
	} 
	cout << endl; 
} 

int main() 
{ 
	// Create and initialize a vector 
	vector<int> v = { 1, 2, 3, 4, 5 }; 

	// Print vector 
	printVector(v); 

	return 0; 
}
