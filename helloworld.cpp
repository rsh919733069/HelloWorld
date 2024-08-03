#include <iostream>
using namespace std;

void sort(int *arr, int i, int j)
{
    int val = arr[i];
    int l = i;
    int r = j;
    while(l < r)
    {
        while(l < r && arr[r] >= val)
        {
            r--;
        }
        if(l < r)
        {
            arr[l++] = arr[r];
        }
        while(l < r && arr[l] <= val)
        {
            l++;
        }
        if(l < r)
        {
            arr[r--] = arr[l];
        }
    }
    arr[l] = val;
    sort(arr, i, l-1);
    sort(arr, l+1, j);
}

// zm-pc 给sort函数添加注释
void sort(int* arr, int size)
{
    // 快排的实现函数
    sort(arr, 0, size);
}

int main()
{
    // notebook 添加的注释
    cout << "hello world!!!" << endl;
    int arr[] = {12,352,321,5233,5123,1,3421};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    
    return 0;
}