/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* planet.c (Chapter 13, page 304) */
/* Checks planet names */

// for an unknown reason, this code does not work for words with 7 chars

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define NUM_PLANETS 9

bool toupperStrEqual(const char* str1, const char*str2);

int main(int argc, char *argv[])
{
  char *planets[] = {"Mercury", "Venus", "Earth",
                     "Mars", "Jupiter", "Saturn",
                     "Uranus", "Neptune", "Pluto"};
  int i, j;

  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++)
      if (toupperStrEqual(argv[i], planets[j])) {
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    if (j == NUM_PLANETS)
      printf("%s is not a planet\n", argv[i]);
  }

  return 0;
}

bool toupperStrEqual(const char* str1, const char*str2){
    for(; toupper(*str1) == toupper(*str2); str1++, str2++){}

    return !*str1;
}