
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  fstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, This is my file. 225";
  // Close the file
  MyFile.close();

  return 0;
}
 
