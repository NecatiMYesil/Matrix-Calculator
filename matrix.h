/****************************************
File: matrix.h
Description: This is header file for the matrix class which includes add, sub and multiply
matrix functions.
Author: Necati Murat Yesil
Email: necatiyesil@cis.vvc.edu
DoC:7/8/19
****************************************/
#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>

class Matrix
{
public:
    Matrix();
    void add(int row1, int col1, int arr1[][100], int row2, int col2, int arr2[][100]);
    void subtract(int row1, int col1, int arr1[][100], int row2,int col2, int arr2[][100]);
    void multiply(int row1, int col1, int arr1[][100], int row2, int col2, int arr2[][100]);
};
#endif
