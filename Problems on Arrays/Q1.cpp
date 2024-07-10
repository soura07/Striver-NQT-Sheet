// Find the smallest number in an array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int sortArray(vector<int> &arr){
    sort(arr.begin(), arr.end());
    return arr[0];
}
int main()
{
    vector<int> arr1 = {98,123,75,126,902,61};
    vector<int> arr2 = {98,123,75,126,902,42};

    cout << "Smallest number is " << sortArray(arr1);
    cout << endl;
    cout << "Smallest number is " << sortArray(arr2);

}