#include<iostream>
using namespace std;

int main()
{
    
    
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    int sum[size];
    sum[0]=arr[0];
    int sum1=sum[0];
    for (int i = 1; i < size; i++)
    {
        sum1=arr[i]+sum1;
        sum[i]=sum1;
    }
    for (int i = 0; i < size; i++)
    {
        if(sum[size-1]-sum[i]==sum[i]-arr[i]) // rightsum == leftsum
            cout<<"index: "<<i<<" is equilibrium point"<<endl;
    }
    
    return 0;
}

