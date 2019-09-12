//
// Created by carlosjose.requena on 20/08/2019.
//

#ifndef LEARNING_CPP_SRC_FUNCTIONS_FUNCTIONS_HPP_
#define LEARNING_CPP_SRC_FUNCTIONS_FUNCTIONS_HPP_

class Functions {
 public:
  int maxBetweenTwoNumbersExample(int aNum1, int aNum2); // function returning the max between two numbers
  void swapCallByValueExample(int aNum1, int aNum2);
  void swapCallByPointerExample(int *aNum1Ptr, int *aNum2Ptr);
  void swapCallByReferenceExample(int &aNum1, int &aNum2);
  int  defaultValuesForParameters(int aNum1, int aNum2 = 20);
  Functions();
  ~Functions();
};

#endif //LEARNING_CPP_SRC_FUNCTIONS_FUNCTIONS_HPP_
