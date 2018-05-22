#pragma once
#include <stdbool.h>

#define MAXLEN 1000   // max len of any input line
#define MAXLINE 1000  // maximum input line size

// Bitwise functions
int create_mask(const int n, const int position, int *const mask,
                const bool inverted);
int clear_bitfield(int *x, const int position, const int n);

// Character I/O
int getch(void);
void ungetch(int val);

// Line I/O
int mygetline(char *const line, const int maxline);
int readlines(const char **const lineptr, const int maxlines);
void writelines(const char *const *const lineptr, const int nlines);
void freelines(char *const *const lineptr, const int nlines);

// Memory
char *myalloc(int n);
void myafree(char *p);

// Maths
int powi(int base, int exp);

// Strings
// TODO: Either uncomment this or remove it and make 1.19 static.
// void reverse(char *const s, const int len);
