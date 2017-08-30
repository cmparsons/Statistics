// Description: Perform bubble sort on data given in file.

#include <iostream>
#include <fstream>
#include "analysis.hpp"
using namespace std;

int main(int argc, char *argv[]) {
  string input_file = "";
  string output_file = "output.dat";

  switch (argc) {
    case 0: case 1:
      // no input file name -- should exit program
      cout << "No input file to read from. ABORT\n";
      exit(1);
      break;
    case 2:
      // input file name given but no output file name
      input_file = argv[1];
      break;
    default:
      // files names given for input and output file
      input_file = argv[1];
      output_file = argv[2];
      break;
  }

  ifstream fin(input_file);
  ofstream fout(output_file);

  const long SIZE = 100;
  double data_array[SIZE] = {};
  long length = 0;

  long i = 0;
  cout << "Getting data...\n";
  while (fin >> data_array[i]) i++;
  length = i;

  bubble_sort(data_array, length);

  cout << "Writing to output file...\n";
  fout << "Ouput:\n";
  fout << "Mean: " << calculate_mean(data_array, length) << endl;
  fout << "Median: " << get_median(data_array, length) << endl;
  fout << "First Quartile: " << calculate_quartile(25, data_array, length) << endl;
  fout << "Second Quartile: " << calculate_quartile(50, data_array, length) << endl; // median should yield same answer
  fout << "Third Quartile: " << calculate_quartile(75, data_array, length) << endl;

  return 0;
}
