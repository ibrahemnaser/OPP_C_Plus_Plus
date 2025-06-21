/**
 * Add a "Include guard" for preventing "Error: redefinition of .... " when include this header multiple times
 */
#ifndef H_SUM_ // if not defined before proceed | OR | jump to the #endif
#define H_SUM_

int sum(int n)
{
  int res = 0;

  for (int i = 1; i <= n; i++)
    res += i;

  return res;
}

#endif