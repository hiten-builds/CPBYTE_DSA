#include<iostream>
#include<vector>
using namespace std;    

int main(){
    int m,n;
    cin>>m>>n;
    // declaring a 2D vector of size m*n and initializing all elements to 0
    vector<vector<int>>v(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<' ';
        }
        cout<<'\n';
    }   

    //declaring a 2D vector of size 4*5 and initializing all elements to 10
    vector<vector<int>>v2(4,vector<int>(5,10));
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout<<v2[i][j]<<' ';
        }
        cout<<'\n';
    }

    // intializing a 2D vector using initializer list
    vector<vector<int>>v3={
                            {1,2,3},    
                            {4,5,6},
                            {7,8,9}
                        
                            };
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<v3[i][j]<<' ';
        }
        cout<<'\n';
    }

    return 0; 
}