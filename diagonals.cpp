#include<iostream>
using namespace std;
                        
int main()
{
    int rows, cols;
    cin>>rows>>cols;
    int mat[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>mat[i][j];
        }
        
    }
    //principal diagonal
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(i==j)
                cout<<mat[i][j];
            else
                cout<<" ";
        }
        cout<<endl;
        
    }
    //secondary diagonal
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(i+j+1==cols)
                cout<<mat[i][j];
            else
                cout<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}