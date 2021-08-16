#include <iostream>

using namespace std;

// Pointer p1 points to arr[5], it is same with p = arr;
// Pointer pi points to arr, so if something changes the array (in function print), the arr in main will also be changed.
void print(int* p1)
{
     for(int i = 0; i < 5; i++)
    {
        p1[i] += 1;    
        cout << p1[i] << " " ;
    }    
    cout << endl;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int* p;
    // The following is same with the function print.
    p = arr;
    for(int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;

    print(arr);

    // Pointer pi points to arr, so if something changes the array (in function print), the arr in main will also be changed.
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }    
    cout << endl;
    return 0;
}
