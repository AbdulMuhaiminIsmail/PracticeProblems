#include<iostream>
using namespace std;
                        
int main()
{
    char arr[]="hey gh e hj e hfs dfj dfkjdksf dfkj";
    int j=0;
     for(int i = 0; arr[i]!='\0'; i++)
    {
        if(arr[j]!=' ')
            cout<<arr[i];
        else
            cout<<endl;
        j++;
    }                   
    return 0;
}