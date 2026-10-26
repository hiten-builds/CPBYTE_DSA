#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums;
    // push back function -- adds element at the last of the vector
    // size and capacity functions testing
    nums.push_back(10);
    cout<<"size is :"<<nums.size()<<" and capacity is : "<<nums.capacity()<<endl;
    nums.push_back(20);
    cout<<"size is :"<<nums.size()<<" and capacity is : "<<nums.capacity()<<endl;
    nums.push_back(51);
    cout<<"size is :"<<nums.size()<<" and capacity is : "<<nums.capacity()<<endl;
    nums.push_back(23);
    cout<<"size is :"<<nums.size()<<" and capacity is : "<<nums.capacity()<<endl;
    // lets print the whole vector
    for(int i : nums) {
        cout << i << " ";
    }cout<<endl;

    // pop back function -- removes element from the last of vector
    nums.pop_back();
    cout<<"size is :"<<nums.size()<<" and capacity is : "<<nums.capacity()<<endl;
    // print 
    for(int i : nums) {
        cout << i << " ";
    }
    cout << endl;
    // insert function to add any value at a given position in vector
    // insert(iterator,val)
    nums.insert(nums.begin(),1);
    // print
    for(int i : nums) {
        cout << i << " ";
    }cout<<endl;
    
    return 0;
}