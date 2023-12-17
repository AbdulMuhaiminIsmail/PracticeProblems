#include<iostream>
using namespace std;
void reverse(char arr[], char rev[], int size)
{
     
    for (int i = size - 2; i > -1; i--)
    {
        rev[size-2-i]=arr[i];
        
    }
    rev[size-1]='\0';
}                       
int main()
{
    char arr[]="hello my name is mosh hamedani";
    int size=sizeof(arr)/sizeof(arr[1]); 
    char rev[size]; 
    reverse(arr, rev, size);
    cout<<arr<<endl;
    cout<<rev;         
    return 0;
}
    