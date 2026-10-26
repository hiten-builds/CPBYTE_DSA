#include<iostream>
#include<vector>
using namespace std;
// Single Number - Leetcode 136 easy level question
// below written code is writtten for Leetcode problem 
// its just a functional code not with main code


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int val: nums){
            ans^= val;
        }
        return ans;
    }
};