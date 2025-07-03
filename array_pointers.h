#ifndef _Array_Pointers
#define _Array_Pointers

#include <iostream>
using namespace std;

void learn_array_pointers()
{
  cout << "***************************************************************" << endl;
  cout << "LEARNING ARRAY POINTERS" << endl;
  cout << "***************************************************************" << endl;

  // arr is an address to its first element
  int arr[] = {1, 2, 4, 5};
  // cout << arr << endl; // === &arr[0]
  // cout << &arr[0] << endl;

  // arr + 1 is an address to its second element
  // cout << (arr + 1) << endl; // === &arr[1]
  // cout << &arr[1] << endl;

  int *ptr_arr = arr; // || int *ptr_arr = &arr[0];
  // cout << ptr_arr << endl;
  // cout << *ptr_arr << endl;

  // cout << arr[3] << endl;
  ptr_arr[3] = 18888;
  // cout << arr[3] << endl;

  // OFFSET NOTATION
  // cout << *(ptr_arr + 1) << endl;
  // cout << *(arr + 1) << endl; // === SUBSCRIPT NOTATION arr[1]
  // cout << *(arr + 2) << endl;
  // cout << *(arr + 3) << endl;

  // ********************************************************* //
  // Array || Pointers Arithmetic

  int arr2[] = {1, 2, 4, 5};
  int *ptr_arr2 = arr2;
  // cout << *(ptr_arr2 + 3) << endl;
  // cout << *(ptr_arr2 + 2) << endl;
  // cout << *(ptr_arr2 + 1) << endl;
  // cout << *(ptr_arr2) << endl;

  // cout << ++ptr_arr2 << endl;
  // cout << &arr2[1] << endl;
  // cout << *(ptr_arr2 - 2) << endl; // get last element in prev array
  // cout << arr2 - 2 << endl;
  // cout << "AFTER" << endl;
  // ********************************************************* //
  // Array of Char
  string str = "hello";
  char arr3[] = "hello";
  char *ptr_char = arr3;

  // cout << ptr_char << endl;
  // cout << *ptr_char << endl;
  // cout << &ptr_char << endl;

  // cout << arr3 << endl;
  // cout << &arr3 << endl;
  // cout << &arr3 + 1 << endl;
  // cout << arr3 + 1 << endl;

  // cout << str << endl;
  // cout << &str << endl;
  // cout << &str + 1 << endl;
  // cout << str[0] << endl;

  /**********************************************************/
  // POINTERS WITH CONSTATN

  // 1- Pointer to constant >> const int* >> can change reference not the value of its reference
  // 2- Constant pointer >> int* const >> can change the value of its reference not the reference
  // 3- Constant pointer to constant >> const int* const >> can't change reference or the value of its reference

  int val1 = 111;
  int val2 = 1343;

  int *ptr2_val1 = &val1;
  const int *ptr_val1 = &val1;
  int *const ptr3_val1 = &val1;
  const int *const ptr4_val1 = &val1;

  cout << "VAL__1:: " << val1 << endl;
  cout << "PTR___VAL__1:: " << *ptr_val1 << endl;
  cout << "PTR2___VAL__1:: " << *ptr2_val1 << endl;

  // [1]- pointer to constant >> can change reference not the value of its reference
  // *ptr_val1 = 222; // ERROR
  ptr_val1 = &val2;

  cout << "VAL__1:: " << val1 << endl;
  cout << "PTR___VAL__1:: " << *ptr_val1 << endl;
  cout << "PTR2___VAL__1:: " << *ptr2_val1 << endl;

  // [2]- constant pointer >> can change the value of its reference not its reference
  // ptr3_val1 = &val2;  // ERROR
  *ptr3_val1 = 222;

  cout << "VAL__1:: " << val1 << endl;
  cout << "PTR___VAL__1:: " << *ptr_val1 << endl;
  cout << "PTR2___VAL__1:: " << *ptr2_val1 << endl;
  cout << "PTR3___VAL__1:: " << *ptr3_val1 << endl;

  // [3]- constant pointer to constant >> can not change the value of its reference or its reference
  // ptr4_val1 = &val2;  // ERROR
  // *ptr4_val1 = 222; // ERROR

  cout << "VAL__1:: " << val1 << endl;
  cout << "PTR___VAL__1:: " << *ptr_val1 << endl;
  cout << "PTR2___VAL__1:: " << *ptr2_val1 << endl;
  cout << "PTR3___VAL__1:: " << *ptr3_val1 << endl;
  cout << "PTR4___VAL__1:: " << *ptr4_val1 << endl;
}

#endif