/*
1.First you took sum of whole array.
2.Then you subtract that sum by going to the right of the array and
match if the sum value matches the leftSum.
if not add the value at that particular index to the leftSum until
the values of rightSum and leftSum matches.
*/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int>& nums)
    {
        int rightSum = 0;
        for (int i=0; i<nums.size(); i++)
        {
            rightSum+=nums[i]; // Total sum of the array
        }

        int leftSum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            rightSum-=nums[i];

            if(rightSum==leftSum)
            {
                return i;
            }
            else
            {
                leftSum+=nums[i];
            }
        }
        return -1;
    }
};

int main()
{
    vector<int>v;
    for (int i=0; i<2; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    Solution obj = Solution();
    int ans = obj.pivotIndex(v);
    cout<<ans;
}

