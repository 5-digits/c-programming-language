#include <ctype.h>
#include <stdio.h>

double atof(char s[]);
int atoi(char s[]);

int main() {
  char mychar[] = {"-1245.678"};
  printf("%g\n", atof(mychar));
}

// atoi: convert string s to integer using atof
int atoi(char s[]) {
  double atof(char s[]);
  return (int)atof(s);
}

// atof() - convert string s to double
double atof(char s[]) {
  double val, power;
  int i, sign;

  for (i = 0; isspace(s[i]); i++) {
  }  // no-op, skip whitespace

  sign = (s[i] == '-') ? -1 : 1;

  if (s[i] == '+' || s[i] == '-') {
    i++;
  }

  for (val = 0.0; isdigit(s[i]); i++) {
    val = 10.0 * val + (s[i] - '0');
  }

  if (s[i] == '.') {
    i++;
  }

  for (power = 1.0; isdigit(s[i]); i++) {
    val = 10.0 * val + (s[i] - '0');
    power *= 10.0;
  }
  return sign * val / power;
}