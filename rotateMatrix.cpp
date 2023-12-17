#include<iostream>
using namespace std;

void rotateRight(int mat[][100], int rows, int cols)
{
    int k=0, l=0;
    int rotated[rows][cols];

    for (int j = 0; j < cols; j++)
    {
        for (int i = rows-1; i >= 0; i--)
        {
            rotated[k][l]=mat[i][j];
            l++;
        }
        k++;
        l=0;
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            mat[i][j]=rotated[i][j];
        } 
    }
}

void rotateLeft(int mat[][100], int rows, int cols)
{
    int k=0, l=0;
    int rotated[rows][cols];

    for (int j = cols-1; j >= 0; j--)
    {
        for (int i = 0; i < rows; i++)
        {
            rotated[k][l]=mat[i][j];
            l++;
        }
        k++;
        l=0;
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            mat[i][j]=rotated[i][j];
        } 
    }
}          

int main()
{
    int rows, cols;
    cout<<"Please enter the no. of rows: ";
    cin>>rows;
    cout<<"Please enter the no. of columns: ";
    cin>>cols;
    int mat[100][100];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>mat[i][j];
        } 
    }

    rotateRight(mat, rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    rotateLeft(mat, rows, cols);

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