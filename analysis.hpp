
#ifndef ANALYSIS_HPP
#define ANALYSIS_HPP
using namespace std;

template <class T>
void bubble_sort(T array[], const long length) {
  for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length - 1 - i; j++) {
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
T get_median(const T array[], const long length) {
  T median;

  if (length % 2 == 0) {
    T val1 = array[length / 2];
    T val2 = array[length / 2 + 1];

    median = (val1 + val2) / 2.0;
  } else {
    median = array[(length + 1) / 2];
  }

  return median;
}

template <class T>
float calculate_mean(const T array[], const long length) {
  T sum = 0;
  float mean = 0;

  for (int i = 0; i < length; i++) {
    sum += array[i];
  }
  mean = static_cast<float>(sum) / length;

  return mean;
}

template<class T>
T calculate_quartile(const float quartile, T array[], const long length) {
  long observation = (quartile / 100) * (length + 1);

  return array[observation];
}

#endif
