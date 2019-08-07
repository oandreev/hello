// This is an open source non-commercial project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include <stdio.h>

int main(void)
{
  int a = 1;
  int b = 2;
  if ((a == b) || (b == a)){
    int c = 1;
  }
  printf("Hello world!\n");
  return(0);
}
