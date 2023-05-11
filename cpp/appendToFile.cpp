// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  //append to a file
  myfile.open ("example.conf", std::ios_base::app);
  myfile << "Writing this to a file.\n";
  myfile.close();
  return 0;
}

