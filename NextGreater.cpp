#include <bits/stdc++.h>

vector<int> nextGreaterElement(vector<int> &arr, int n)
{
    stack<int> st;
    vector<int> res;
    for (int i = n - 1; i >= 0; i--)
    {
        if (st.empty()) {
            res.push_back(-1);
            st.push(arr[i]);
        }
        else if (arr[i] >= st.top()) {
            while (!st.empty() && arr[i] >= st.top())
                st.pop();
            if (st.empty())
                res.push_back(-1);
            else
                res.push_back(st.top());
            st.push(arr[i]);
        }
        else {
            if (st.empty())
                res.push_back(-1);
            else
                res.push_back(st.top());
            st.push(arr[i]);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}