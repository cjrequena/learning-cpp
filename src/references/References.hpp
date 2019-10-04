//
// Created by carlosjose.requena on 26/09/2019.
//

#ifndef LEARNING_CPP_SRC_REFERENCES_REFERENCES_HPP_
#define LEARNING_CPP_SRC_REFERENCES_REFERENCES_HPP_

class References {
 public:
  void declaringReferenceExample();
  void callByReferenceExample(int &x, int &y);
  double &returnReferenceFromFunctionExample(double vals[], int i);
  References();
  ~References();
};

#endif