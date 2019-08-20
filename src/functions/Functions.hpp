//
// Created by carlosjose.requena on 20/08/2019.
//

#ifndef CPP_EXERCISES_SRC_FUNCTIONS_FUNCTIONS_HPP_
#define CPP_EXERCISES_SRC_FUNCTIONS_FUNCTIONS_HPP_

class Functions {
 public:
  Functions(); // Constructor
  ~Functions(); //Destructor
  int maxBetweenTwoNumbersExample(int t_num1, int t_num2); // function returning the max between two numbers
  void swapCallByValueExample(int t_num1, int t_num2);
  void swapCallByPointerExample(int *t_ptr_num1, int *t_ptr_num2);
  void swapCallByReferenceExample(int &t_num1, int &t_num2);
  int  defaultValuesForParameters(int t_num1, int t_num2 = 20);


};

#endif //CPP_EXERCISES_SRC_FUNCTIONS_FUNCTIONS_HPP_
