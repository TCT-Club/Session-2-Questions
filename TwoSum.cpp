#include<unordered_map>

vector<pair<int, int>> twoSum(vector<int>& arr, int target, int n)
{
	unordered_map<int, int> hashMap;
	vector<pair<int, int>> ans;

	for(int i = 0; i < n; i++)
	{
        hashMap[arr[i]]++;
		if(target - arr[i] == arr[i])
		{
			// Valid pair will only exist if frequency of arr[i] is greater than 1.
			if(hashMap[arr[i]] > 1)
			{
				ans.push_back({arr[i], arr[i]});
				hashMap[arr[i]] -= 2;
			}
		}
		else
			if(hashMap[arr[i]] > 0 && hashMap[target - arr[i]] > 0)
			{
				ans.push_back({arr[i], target - arr[i]});
				hashMap[arr[i]] -= 1;
				hashMap[target - arr[i]] -= 1;
			}
		}
	}
	if(ans.size() == 0) ans.push_back({-1, -1});
	return ans;
}