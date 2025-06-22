/**
 * Add a "Include guard" for preventing "Error: redefinition of .... " when include this header multiple times
 */
#ifndef H_SUM_ // if not defined before proceed | OR | jump to the #endif
#define H_SUM_

// NOW this file is an interface of an another implementaion file
// this approach is important for separating "Declaration" from "Definition" | OR | "Interface" from "Implementation"
//  It is better for Readability, Maintainability, and Debugging

extern int total_calls;

int sum_n(int n);

#endif