#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    /*
    Returns the index of x in the sorted array,
    or returns -1 if x is not present.
    */
    int searchInSortedArray(vector<int>& arr, int x) {

        int low = 0;


        int high = (int)arr.size() - 1;


        while (low <= high) {

            int mid = low + (high - low) / 2;


            if (arr[mid] == x) {
                return mid;
            }


            if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    vector<int> arr = {2, 4, 7, 10, 14, 19};
    int x = 10;

    Solution obj;
    cout << obj.searchInSortedArray(arr, x) << endl;

    return 0;
}