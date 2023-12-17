#include<iostream>
using namespace std;

void shiftRight(int mat[][100], int rows, int cols)
{
    int linear[rows*cols];
    int k=0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            linear[k]=mat[i][j];
            k++;
        } 
    }
    k=0;
    int temp=linear[rows*cols-1];
    for (int i = rows*cols-1; i >= 0; i--)
    {
        linear[i+1]=linear[i];
    }
    linear[0]=temp;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            mat[i][j]=linear[k];
            k++;
        } 
    }
}

void shiftLeft(int mat[][100], int rows, int cols)
{
    int linear[rows*cols];
    int k=0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            linear[k]=mat[i][j];
            k++;
        } 
    }
    k=0;
    int temp=linear[0];
    for (int i = 0; i < rows*cols; i++)
    {
        linear[i]=linear[i+1];
    }
    linear[rows*cols-1]=temp;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            mat[i][j]=linear[k];
            k++;
        } 
    }
}
                        
int main()
{
     int rows, cols, rots;
    cout<<"Please enter the no. of rows: ";
    cin>>rows;
    cout<<"Please enter the no. of columns: ";
    cin>>cols;
    int mat[100][100];

    //if k rotations are required ... rotations%=rows*cols for optimization

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>mat[i][j];
        } 
    }

    shiftRight(mat, rows, cols);


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    shiftLeft(mat, rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
                            
    return 0;
}
