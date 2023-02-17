/**
 * @file factorial.cpp
 * @author Anirudh Chimpidi
 * @brief Code to find factorial of a number
 * @version 0.1
 * @date 2023-02-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/**
 * @mainpage
 * This program contains code to find the
 * factorial of a given number using the
 * loop approach.
 *
 */
#include <iostream>
using namespace std;

void factorial(int n)
{
  int f = 1;
  for (int i = 1; i <= n; i++)
    f *= i;
  
  cout << f << "\n";
}
/**<
 * We use a store variable initialized to 1 and
 * multiply it with an iterator in a loop from
 * 1 to the given number in a chain multiplication.
 * The final value of the store variable is the
 * required factorial value
 */

int main()
{
  int n;
  cin >> n;
  factorial(n);

  return 0;
}