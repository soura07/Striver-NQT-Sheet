// Example 1:
// Input:
//  arr[] = {2,5,1,3,0};
// Output:
//  5
// Explanation:
//  5 is the largest element in the array. 

// Example2:
// Input:
//  arr[] = {8,10,5,7,9};
// Output:
//  10
// Explanation:
//  10 is the largest element in the array. 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int LargestArray(vector<int> &arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}
int main()
{
    vector<int> arr1 = {1, 3, 7, 15, 12};
    vector<int> arr2 = {11, 32, 71, 215, 112};

    cout << "Largest number of 1st Array is :" << LargestArray(arr1) << endl;
    cout << "Largest number of 2nd Array is :" << LargestArray(arr2) << endl; 

}