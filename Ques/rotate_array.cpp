#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        // first approach (Brute force)
        // this is O(n*k) time complexity and O(1) space complexity
        // pick the last element and place it at the first position and shift all other elements to the right by one position. Repeat this process k times.
        for(int i=0;i<k;i++){
            int last = nums[n-1];
            for(int j=n-1;j>0;j--){
                nums[j]=nums[j-1];
            }
            nums[0]=last;
        }
        // BETTER APPROACH in O(n) time and O(n) space
        // second approach using extra space and a formula
        vector <int> a = nums;
        for(int i=0;i<n;i++){
            nums[i]=a[(n-k+i)%n];
        }
        // third approach using extra space
            vector<int>temp;
            // we push the last k elements of the array into a temporary vector
            // and then push the first n-k elements of the array into the temporary vector. 
            // Finally, we copy the temporary vector back to the original array.
            for(int i=n-k;i<n;i++){
                temp.push_back(nums[i]);
            }
            for(int i=0;i<n-k;i++){
                temp.push_back(nums[i]);
            }
            nums=temp;
        

            // Optimal approach in O(n) time and O(1) space
            // fourth approach using reverse function
            // we reverse the entire array, then reverse the first k elements and then reverse the last n-k elements of the array.
            reverse(nums.begin(),nums.end());
            reverse(nums.begin(),nums.begin()+k);
            reverse(nums.begin()+k,nums.end()); 
        

    }
};