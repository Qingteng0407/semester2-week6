#include <stdlib.h>
#include <stdio.h>

/**
 * @brief recursively calculates the factorial of an integer n.
 * 
 * @param n number to find factorial of.
 * @return int n factorial.
 */
//这里的factorial递归 代替！的作用
int factorial(int n) {
  // the base case - this determines when the recursion should stop
  if (n == 0) {
    return 1;
  }

  return n * factorial(n - 1);
}

int main(int argc, char **argv) {
  //ensure 4 arguments: the function name(combinatorials), n, operation, and r
  if (argc != 4) {
    printf("Usage:\n");
    printf("  ./com n C r\n");
    printf("  ./com n P r\n");
    return 1;
  }

  //先验输入是否合法 check if the inputs are valid 
  int n = atoi(argv[1]);
  char *operation = argv[2];
  int r = atoi(argv[3]);
  if (r > n) {
    printf("Error: r must be less than or equal to n.\n");
    return 1;
  }
  int result;

  //根据输入的operation进行计算 calculate based on the operation input
  if (operation[0] == 'C') {
    result = factorial(n) / (factorial(r) * factorial(n - r));
    printf("nCr: %d\n", result);
    } else if (operation[0] == 'P') {
      result = factorial(n) / factorial(n - r);
      printf("nPr: %d\n", result);
    } else {
      printf("Error: Unknown operation '%s'. Use C for combinations or P for permutations.\n", operation);
      return 1;
    }
  }
  /*
  The program should accept a command line argument as follows:
  ./combinatorials n C r
  ./combinatorials n P r

  where n and r are both positive integers, and r is always less than or equal to n.

  for example:
  ./combinatorials 7 C 2

  Your program should then calculate and print out the correct result

  nCr should return the total combinations of r items out of n.
  This is calculated by: n! / (r! (n - r)!)

  nPr should return the total permutations of r items out of n.
  This is calculated by: n! / (n-r)!

  Add appropriate validation to your program to make your code robust.

  You should try and use functions to write your program.

  */
