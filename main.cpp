/****************************************
File: main.cpp
Description: This is a matrix calculator of customized rows and columns first we prompt user to enter row and column number after ask them to enter data for each row and columns for first matrix  after we also ask for a second matrix. After we receive the inputs we prompt user to specifly the fuction "+", "-" or "*". and the algorithm solves and prints the new matrix.
Author: Necati Murat Yesil
Email: necatiyesil@cis.vvc.edu
DoC:7/8/19
****************************************/
#include <iostream>
#include "matrix.h"


int main()
{
    int row1,row2,col1,col2,i,j;
    int arr1[100][100], arr2[100][100];
    std::cout << "Enter the number of rows for first matrix :" << std::endl;
    std::cin >> row1;
    std::cout << "Enter the number of columns for first matrix :" << std::endl;
    std::cin >> col1;
    std::cout << "Enter data for first matrix by clicking enter between each data: " << std::endl;
    
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
            std::cin >> arr1[i][j];
    }
    
    std::cout << "Enter the number of rows for second matrix :";
    std::cin >> row2;
    std::cout << "Enter the number of columns for second matrix :";
    std::cin >> col2;
    std::cout << "Enter data for second matrix by clicking enter between each data: " << std::endl;
    
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
            std::cin >> arr2[i][j];
    }
    
    char ch;
    std::cout << "Enter the operation you want to perform: ";
    std::cout << std::endl << "+ for addition :";
    std::cout << std::endl << "- for subtraction :";
    std::cout << std::endl << "* for multiplication :" << std::endl;
    std::cin >> ch;
    
    Matrix m; 
    switch(ch)
    {
        case '+': m.add(row1,col1,arr1,row2,col2,arr2);
            break;
        case '-': m.subtract(row1,col1,arr1,row2,col2,arr2);
            break;
        case '*': m.multiply(row1,col1,arr1,row2,col2,arr2);
    }
    
    std::cout << std::endl << "Matrix 1 is ";
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
            std::cout << arr1[i][j] << "\t";
        std::cout << std::endl;
    }
    std::cout << std::endl << "Matrix 2 is ";
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
            std::cout << arr2[i][j] << "\t";
        std::cout << std::endl;
    }
    return 0;
}
