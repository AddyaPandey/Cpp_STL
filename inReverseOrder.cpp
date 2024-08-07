// C++ Program to Display Vector Elements in Reverse Order 
// Using Reverse Iterator 
#include <iostream> 
#include <vector> 

using namespace std; 

int main() 
{ 
	// Declare and initialize a vector 
	vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8 }; 

	// Use a reverse iterator to display vector elements in 
	// reverse order 
	for (auto it = vec.rbegin(); it != vec.rend(); ++it) { 
		cout << *it << " "; 
	} 
	cout << endl; 

	return 0; 
}
