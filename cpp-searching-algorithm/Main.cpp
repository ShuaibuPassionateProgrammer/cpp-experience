#include <bits/stdc++.h>
using namespace std;

//proto-typing largest function
int largest(int arr[], int n);

int main()
{
    int arr[] = {11123, 53, 98, 352, 9808};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Largest in given arrayy is %d\n", largest(arr, n));
    
    return 0;
}

//largest function implementation
int largest(int arr[], int n)
{
    int i;
    
    //Initialize maximum element
    int max = arr[0];
    
    
    //Traverse array elements from second and 
    //compare every elementwith current max
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    return max;
}