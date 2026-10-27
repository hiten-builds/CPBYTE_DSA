#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int x:nums){
            sum+=x;
        }
        return sum%k;

        
    }
};