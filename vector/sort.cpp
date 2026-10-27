#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> a={4, 2, 5, 9, 1};
    for(int x:a){
        cout<<x<<" ";
    }
    cout<<endl;
    // sorting the array in descending order
    sort(a.rbegin(), a.rend());
    for(int x: a){
        cout<<x<<" ";
    }cout<<endl;
    // reverse the array
    reverse(a.begin(),a.end());
    for(int x: a){
        cout<<x<<" ";
    }
    cout<<endl;

    //swapping the array

    swap(a[0], a[a.size()-1]);
    for(int x:a){
        cout<<x<<" ";
    }cout<<endl;
    
}