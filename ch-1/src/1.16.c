#include "1.16.h"
#include <stdio.h>
#include "common.h"

/*
 * 1.16 Revise the main routine of the longest-line program so it will correctly
 * print the length of arbitrarily long input lines, and as much as possible of
 * the text.
 *
 * Note: if multiple strings are the longest, this program prints the first one.
 */

int main() {
#ifdef DEBUG
  longest_line();
#else
  printf("1.16: No unit tests.\n");
#endif
}

int longest_line() {
  int len;                // current line length
  int max;                // maximum length seen so far
  char line[MAXLINE];     // current input line
  char longest[MAXLINE];  // longest line saved here

  max = 0;
  while ((len = mygetline(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  if (max > 0)  // there was a line
    printf("%d: %s", max - 1, longest);
  return 0;
}

// copy(): copy 'from' into 'to'; assumes 'to' is big enough
void copy(char to[], const char from[]) {
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}
