/****************************************
File: matrix.cpp
Description: this is an implementation file for the matrix calculator functions. I used basic matrix add, sub and multiply algorithms. 
Author: Necati Murat Yesil
Email: necatiyesil@cis.vvc.edu
DoC:7/8/19
****************************************/
#include "matrix.h"

Matrix::Matrix(){}

void Matrix::add(int row1, int col1, int arr1[][100], int row2, int col2, int arr2[][100])
{
    int i,j;
    if(row1==row2 && col1==col2)
    {
        int arr3[row1][col1];
        std::cout << "New added matrix : " << std::endl;
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
            {
                arr3[i][j]=arr1[i][j]+arr2[i][j];
                std::cout<< arr3[i][j] << "\t";
            }
            
            std::cout << std::endl;
        }
    }

    else 
        std::cout << std::endl << "Addition impossible";
}


void Matrix::subtract(int row1, int col1, int arr1[][100], int row2,int col2, int arr2[][100])
{
    int i,j;
    if(row1==row2 && col1==col2)
    {
        int arr3[row1][col1];
        std::cout <<"New subtracted matrix : " << std::endl;
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
            {
                arr3[i][j]=arr1[i][j]-arr2[i][j];
                std::cout<< arr3[i][j] << "\t";
            }

            std::cout << std::endl;
        }
    }
    else
        std::cout << std::endl << "Subtraction impossible";
}

void Matrix::multiply(int row1, int col1, int arr1[][100], int row2, int col2, int arr2[][100])
{
    int i,j;
    if(col1==row2)
    {
        int arr3[row1][col2];
        std::cout << "New Multiplied matrix : " << std::endl;
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                arr3[i][j]=0;
                for(int k=0; k<col1; k++)
                    arr3[i][j]+= arr1[i][k]*arr2[k][j];
                
                std::cout << arr3[i][j] << "\t";
            }
            
            std::cout << std::endl;
        }
    }
    else
        std::cout << std::endl << "Multiplication impossible";
}



