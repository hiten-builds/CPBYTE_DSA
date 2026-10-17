#include<iostream>
using namespace std;

int  sum(int x,int y){
    int sum=x+y;
    return sum;
}


int main(){
    int a,b;
    cout<<"Enter two numbers to add:"<<endl;
    cin>>a>>b;
    cout<<"Sum of these two numbers is:"<<sum(a,b)<<endl;
    return 0;
}