// Description: Perform bubble sort on data given in file.

#include <iostream>
#include <fstream>
#include "analysis.hpp"
using namespace std;

int main(int argc, char *argv[]) {
  string input_file = "";
  string output_file = "output.dat";

  // no input file name -- should exit program
  if (argc < 1) {
    cout << "No input file to read from. ABORT\n";
    exit(1);
  } else if (argc < 2) {
    // input file name given but no output file name
    input_file = argv[1];
  } else {
    // files names given for input and output file
    input_file = argv[1];
    output_file = arg[2];
  }

  ifstream fin(input_file);
  ofstream fout(output_file);

  const long SIZE = 100;
  double data_array[SIZE] = {};
  long length = 0;

  long i = 0;
  cout << "Getting data...\n";
  while (fin >> data_array[i]) {
    cout << data_array[i] << " ";
    i++;
  }
  length = i + 1;

  bubble_sort(data_array, length);

  cout << "\n\nSorted Data:\n";
  for (int i = 0; i < length; i++) {
    fout << data_array[i] << endl;
    cout << data_array[i] << " ";
  }

  return 0;
}
