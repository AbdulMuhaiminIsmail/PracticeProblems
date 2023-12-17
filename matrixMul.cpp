#include<iostream>
using namespace std;


void multiply(int mul[][100], int m1[][100], int r1, int c1, int m2[][100], int r2, int c2)
{
    int sum=0;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            for(int k=0; k<c1; k++)
            {
                sum+=m1[i][k]*m2[k][j];
            }
            mul[i][j]=sum;
            sum=0;
        }
    }
}
int main()
{
    int r1, c1, r2, c2;
    cout<<"Please enter the no. of rows: ";
    cin>>r1;
    cout<<"Please enter the no. of columns: ";
    cin>>c1;
    int m1[100][100];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin>>m1[i][j];
        }
        
    }
    cout<<"Please enter the no. of rows: ";
    cin>>r2;
    cout<<"Please enter the no. of columns: ";
    cin>>c2;
    int m2[100][100];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin>>m2[i][j];
        }
        
    }
    int mul[100][100];
    multiply(mul, m1, r1, c1, m2, r2, c2);
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
                 
    return 0;
}