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
    //transpose
    int transpose[cols][rows];
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            transpose[i][j]=mat[j][i];
        }
    }
    cout<<endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}