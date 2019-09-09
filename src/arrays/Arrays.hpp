//
// Created by vagrant on 9/2/19.
//

#ifndef CPP_EXERCISES_SRC_ARRAYS_ARRAYS_HPP
#define CPP_EXERCISES_SRC_ARRAYS_ARRAYS_HPP

class Arrays {
public:
  void arraysExample();
  void multiDimensionalArraysExample();
  void pointerToAnArrayExample();
  double  passingAnArrayToFunctionWay1Example(int arr[], int size);
  double  passingAnArrayToFunctionWay2Example(int *arr, int size);
  double  passingAnArrayToFunctionWay3Example(std::array<int,5> arr);


  Arrays();
  ~Arrays();
};

#endif //CPP_EXERCISES_SRC_ARRAYS_ARRAYS_HPP
