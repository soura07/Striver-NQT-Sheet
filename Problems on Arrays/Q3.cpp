// Find Second Smallest and Second Largest Element in an array
// Example 1:
// Input:
//  [1,2,4,7,7,5]
// Output:
//  Second Smallest : 2
// 	Second Largest : 5
// Explanation:
//  The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

// Example 2:
// Input:
//  [1]
// Output:
//  Second Smallest : -1
// 	Second Largest : -1
// Explanation:
//  Since there is only one element in the array, it is the largest 
//  and smallest element present in the array. There is no second largest 
//  or second smallest element present.

#include<bits/stdc++.h>
using namespace std;
int getElem(int arr[], int n){
    if(n==0 or n == -1){
        cout << -1 <<" " << -1 << endl;
    }
    sort(arr, arr+n);
    int small = arr[1];
    int large = arr[n-2];
    cout << "Second Smallest is " << small << endl;
    cout << "Second Largest is " << large << endl;
    

}
int main()
{
    int arr[] = {1,2,4,7,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    getElem(arr, n);
    return 0;
}