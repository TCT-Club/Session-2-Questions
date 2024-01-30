#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    int max1 = arr[0];
    int max2 = INT_MIN;

    for(int e : arr) {
        if(e > max1) {
            max2 = max1;
            max1 = e;
        } else if(e > max2 && e != max1) {
            max2 = e;
        }
    }
    if(max2 == INT_MIN) return -1;
    return max2;
}