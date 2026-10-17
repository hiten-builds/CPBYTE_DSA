#include<iostream>
using namespace std;

bool isPrime(int n){
    // if its less than or equal to 1, its not prime
    if(n<=1)return false;
    // if its 2, its prime
    if(n==2)return true;
    // no even number greater than 2 can be prime
    if(n%2==0)return false;
    // check for factors from 3 to sqrt(n)
    // we check only odd numbers because even numbers are not prime
    // all factors of n can be found in pairs, and if n has a factor greater than sqrt(n), it must also have a factor less than sqrt(n)
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(isPrime(num)){
        cout<<num<<" is a prime number."<<endl;
    } else {
        cout<<num<<" is not a prime number."<<endl;
    }
    return 0;
}