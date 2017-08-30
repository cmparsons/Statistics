
#ifndef ANALYSIS_HPP
#define ANALYSIS_HPP
using namespace std;

template <class T>
void bubble_sort(T array[], const long length) {
  for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length - 1 - j; j++) {
      if (array[j] > array[j + 1]) {
        swap(array[j], array[j + 1]);
      }
    }
  }
  return;
}

template <class T>
void swap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
  return;
}

template <class T>
T get_median(T array[], const long length) {
  if (length % 2 == 0) {
    T val1 = array[length / 2];
    T val2 = array[length / 2 + 1];

    return (val1 + val2) / 2;
  } else {
    return array[(length + 1) / 2];
  }
}

#endif
