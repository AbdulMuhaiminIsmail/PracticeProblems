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
     

    int j=0;
    while(j!=cols)
    {
        if(j%2==0)
        {
            for(int i=0; i<rows; i++)
            {
                cout<<mat[i][j]<<" ";
            }
            j++;
        }
        else
        {
            for(int i=rows-1; i>=0; i--)
            {
                cout<<mat[i][j]<<" ";
            }
            j++;
        }
    }
                      
    return 0;
}