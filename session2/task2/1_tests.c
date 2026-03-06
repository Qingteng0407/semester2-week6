#include <stdio.h>
#include <string.h>
#include <assert.h>

int is_palindrome(const char *str);

//int main(void) {
  // Use 'assert' to write some tests - does the function work?
  // consider what is and is not a palindrome!
  
void test_is_palindrome() {
  TEST_CHECK(is_palindrome("") == 1); // empty string is a palindrome
  TEST_CHECK(is_palindrome("racecar") == 1); // racecar is a palindrome
  TEST_CHECK(is_palindrome("hello") == 0); // hello is not a palindrome
  TEST_CHECK(is_palindrome("world") == 0); // world is not a palindrome
}

/**
 * @brief Checks if a given string is a palindrome.
 * 
 * @param str The string to be checked.
 * @return int 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(const char *str) {
  int len = strlen(str);
  for (int i = 0; i < len / 2; i++) {
    if (str[i] != str[len - i - 1]) {
      return 0;
    }
  }
  return 1;
}