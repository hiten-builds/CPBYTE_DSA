#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0,n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[j]){
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
        // below is another approach using STL unique function

        // auto ip =unique(nums.begin(),nums.end());
        // int count=0;
        // count=distance(nums.begin(),ip);
        // return count;
    }
};