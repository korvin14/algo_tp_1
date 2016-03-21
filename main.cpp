/*
 * algo_tp_1/mai.cpp
 *
 *   Created on: Mar 21, 2016
 *       Author: Dmitry Ermachenkov
 *      License: free-to-use if you refernce me
 *  Description:
 */

#include <iostream>

using std::cout;
using std::cin;

int countTrailingZeroes(int factorialNumber);

int main(void) {
  int inputNumber;
  cin >> inputNumber;
  cout << countTrailingZeroes(inputNumber);
  return 0;
}

int countTrailingZeroes(int factorialNumber) {
  int trailingZeroesCount = 0;
  for (int power5 = 5; power5 <= factorialNumber; power5*=5) {
    trailingZeroesCount += factorialNumber/power5;
  }
  return trailingZeroesCount;
}
