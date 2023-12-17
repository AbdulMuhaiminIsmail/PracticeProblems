#include<iostream>
#include<string.h>
using namespace std;

void revWord(char arr[], int start, int end)
{
    while (start < end) {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void reverse(char arr[], int size)
{
    int start = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == ' ' || arr[i] == '\0') {
            revWord(arr, start, i - 1);
            start = i + 1;
        }
    }
}

int main()
{
    char arr[] = "hello my name is abdul muhaimin";
    reverse(arr, sizeof(arr));
    cout << arr << endl;
    return 0;
}
