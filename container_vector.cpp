#include <iostream>
#include <vector>

int main() {
  // Initializes an array of size 3
  std::vector<int> grades(3);

  // Assign the values to the vector elements
  grades[0] = 20;
  grades[1] = 30;
  grades[2] = 40;

  // Display all 3 vector elements
  std::cout << grades[0] << ", ";
  std::cout << grades[1] << ", ";
  std::cout << grades[2] << "\n";

  grades.push_back(50);
  std::cout << grades[3] << "\n";

  grades.insert(grades.end(),60);
  std::cout << grades[4] << "\n";
}
