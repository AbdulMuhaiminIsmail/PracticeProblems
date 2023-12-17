#include <iostream>
using namespace std;
void printArray(char arr[][41], char arr2[][41], int r, int c)
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
           cout<<arr[i][j];
        }
        for(int j=0; j<c; j++)
        {
           cout<<arr2[i][j];
        }
        cout<<endl;
    }
}

void moveAll(char arr[][41], char arr2[][41], int row1, int row2, int col1, int col2, int col3, int col4, int r, int c)
{
    arr[r/2][c/2]=' ';
    arr2[r/2][c/2]=' ';
    while(row1-1!=0 || row2+2!=r || (col1-1!=0 || col2+2!=c) || (col3+2!=c || col4-1!=0))
    {
        //up
        if(row1-1!=0)
        {
            arr[row1][c/2]=' ';
            arr[row1-1][c/2]='|';
            arr[row1-2][c/2]='^';
            arr2[row1][c/2]=' ';
            arr2[row1-1][c/2]='|';
            arr2[row1-2][c/2]='^';
            row1--;  
        }
        
        //down
        if(row2+2!=r)
        {
            arr[row2][c/2]=' ';
            arr[row2+1][c/2]='|';
            arr[row2+2][c/2]='v';
            arr2[row2][c/2]=' ';
            arr2[row2+1][c/2]='|';
            arr2[row2+2][c/2]='v';
            row2++;
        }
        
        //left
        arr[r/2][col1]=' ';
        arr[r/2][col1-1]='-';
        arr[r/2][col1-2]='<';
        col1--;
        arr2[r/2][col2]=' ';
        arr2[r/2][col2+1]='-';
        arr2[r/2][col2+2]='>';
        col2++;
        //right
        arr[r/2][col3]=' ';
        arr[r/2][col3+1]='-';
        arr[r/2][col3+2]='>';
        col3++;
        arr2[r/2][col4]=' ';
        arr2[r/2][col4-1]='-';
        arr2[r/2][col4-2]='<';
        col4--;
        printArray(arr, arr2, r, c);
    }
}

void moveUp(char arr[][41], char arr2[][41], int r, int c)
{
    arr[r/2][c/2-2]=' ';
    arr[r/2][c/2-1]=' ';
    arr[r/2][c/2+2]=' ';
    arr[r/2][c/2+1]=' ';
    arr[r/2+1][c/2]=' ';
    arr[r/2+2][c/2]=' ';
    arr[r/2][c/2]=' ';
    arr[r/2-1][c/2]=' ';
    arr[r/2-2][c/2]=' ';
    //arr2
    arr2[r/2][c/2-2]=' ';
    arr2[r/2][c/2-1]=' ';
    arr2[r/2][c/2+2]=' ';
    arr2[r/2][c/2+1]=' ';
    arr2[r/2+1][c/2]=' ';
    arr2[r/2+2][c/2]=' ';
    arr2[r/2][c/2]=' ';
    arr2[r/2-1][c/2]=' ';
    arr2[r/2-2][c/2]=' ';
    int row=r/2;
    while(row-1!=0)
    {
        arr[row][c/2]=' ';
        arr[row-1][c/2]='|';
        arr[row-2][c/2]='^';
        arr2[row][c/2]=' ';
        arr2[row-1][c/2]='|';
        arr2[row-2][c/2]='^';
        row--;
        printArray(arr, arr2, r, c);
    }
}
void moveDown(char arr[][41], char arr2[][41], int r, int c)
{
    arr[r/2][c/2]=' ';
    arr[r/2][c/2-1]=' ';
    arr[r/2][c/2-2]=' ';
    arr[r/2][c/2+2]=' ';
    arr[r/2][c/2+1]=' ';
    arr[r/2-1][c/2]=' ';
    arr[r/2-2][c/2]=' ';
    //arr2
    arr2[r/2][c/2]=' ';
    arr2[r/2][c/2-1]=' ';
    arr2[r/2][c/2-2]=' ';
    arr2[r/2][c/2+2]=' ';
    arr2[r/2][c/2+1]=' ';
    arr2[r/2-1][c/2]=' ';
    arr2[r/2-2][c/2]=' ';
    int row=r/2;
    while(row+2!=r)
    {
        arr[row][c/2]=' ';
        arr[row+1][c/2]='|';
        arr[row+2][c/2]='v';
        arr2[row][c/2]=' ';
        arr2[row+1][c/2]='|';
        arr2[row+2][c/2]='v';
        row++;
        printArray(arr, arr2, r, c);
    }
}

void moveLeft(char arr[][41], char arr2[][41], int r, int c)
{
    arr[r/2][c/2]=' ';
    arr[r/2][c/2+1]=' ';
    arr[r/2][c/2+2]=' ';
    arr[r/2-1][c/2]=' ';
    arr[r/2-2][c/2]=' ';
    arr[r/2+1][c/2]=' ';
    arr[r/2+2][c/2]=' ';
    //arr2
    arr2[r/2][c/2]=' ';
    arr2[r/2][c/2-1]=' ';
    arr2[r/2][c/2-2]=' ';
    arr2[r/2-1][c/2]=' ';
    arr2[r/2-2][c/2]=' ';
    arr2[r/2+1][c/2]=' ';
    arr2[r/2+2][c/2]=' ';
    int col=c/2;
    int col2=c/2;
    while(col-1!=0 && col2+2!=c)
    {
        arr[r/2][col]=' ';
        arr[r/2][col-1]='-';
        arr[r/2][col-2]='<';
        col--;
        arr2[r/2][col2]=' ';
        arr2[r/2][col2+1]='-';
        arr2[r/2][col2+2]='>';
        col2++;
        printArray(arr, arr2, r, c);
    }
}

void moveRight(char arr[][41], char arr2[][41], int r, int c)
{
    arr[r/2][c/2]=' ';
    arr[r/2][c/2-1]=' ';
    arr[r/2][c/2-2]=' ';
    arr[r/2-1][c/2]=' ';
    arr[r/2-2][c/2]=' ';
    arr[r/2+1][c/2]=' ';
    arr[r/2+2][c/2]=' ';
    //arr2
    arr2[r/2][c/2]=' ';
    arr2[r/2][c/2+1]=' ';
    arr2[r/2][c/2+2]=' ';
    arr2[r/2-1][c/2]=' ';
    arr2[r/2-2][c/2]=' ';
    arr2[r/2+1][c/2]=' ';
    arr2[r/2+2][c/2]=' ';
    int col=c/2;
    int col2=c/2;
    while(col+2!=c && col2-1!=0)
    {
        arr[r/2][col]=' ';
        arr[r/2][col+1]='-';
        arr[r/2][col+2]='>';
        col++;
        arr2[r/2][col2]=' ';
        arr2[r/2][col2-1]='-';
        arr2[r/2][col2-2]='<';
        col2--;
        printArray(arr, arr2, r, c);
    }
}

int main() {
    const int r=21, c=41;
    //array 1
    char arr[r][c];
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
        {
            if((i==0)||(i==r-1))
                arr[i][j]='-';
            else if((j==0)||(j==c-1))
                arr[i][j]='|';
            else
                arr[i][j]=' ';
        }
    arr[0][0]='+';
    arr[r-1][0]='+';
    arr[0][c-1]='+';
    arr[r-1][c-1]='+';
    arr[r/2][c/2]='+';
    arr[r/2][c/2-1]='-';
    arr[r/2][c/2-2]='<';
    arr[r/2][c/2+1]='-';
    arr[r/2][c/2+2]='>';
    arr[r/2-1][c/2]='|';
    arr[r/2-2][c/2]='^';
    arr[r/2+1][c/2]='|';
    arr[r/2+2][c/2]='v';
    //array 2
    char arr2[r][c];
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
        {
            if((i==0)||(i==r-1))
                arr2[i][j]='-';
            else if((j==0)||(j==c-1))
                arr2[i][j]='|';
            else
                arr2[i][j]=' ';
        }
    arr2[0][0]='+';
    arr2[r-1][0]='+';
    arr2[0][c-1]='+';
    arr2[r-1][c-1]='+';
    arr2[r/2][c/2]='+';
    arr2[r/2][c/2-1]='-';
    arr2[r/2][c/2-2]='<';
    arr2[r/2][c/2+1]='-';
    arr2[r/2][c/2+2]='>';
    arr2[r/2-1][c/2]='|';
    arr2[r/2-2][c/2]='^';
    arr2[r/2+1][c/2]='|';
    arr2[r/2+2][c/2]='v';
    printArray(arr, arr2, r, c);
    char input;
    cout
    <<"W: Up\n"
    <<"S: Down\n"
    <<"A: Left\n"
    <<"D: Right\n"
    <<"X: All one by one\n";
    cout<<"Enter direction to shoot: ";
    cin>>input;
    switch(input)
    {
        case 'W':
            moveUp(arr, arr2, r, c);
            break;
        case 'S':
            moveDown(arr, arr2, r, c);
            break;
        case 'A':
            moveLeft(arr, arr2, r, c);
            break;
        case 'D':
            moveRight(arr, arr2, r, c);
            break;
        case 'X':
            moveAll(arr, arr2, r/2, r/2, c/2, c/2, c/2, c/2, r, c);
            break;
    }
    return 0;
}