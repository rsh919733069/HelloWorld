#include <iostream>
using namespace std;

// zm-pc 给sort函数添加注释
void sort(int* arr, int size)
{
    int temp = 0;
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size-1 - i; j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    cout << "hello world!!!" << endl;
    int arr[] = {12,352,321,5233,5123,1,3421};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    
    return 0;
}