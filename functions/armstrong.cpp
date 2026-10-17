#include<iostream>
using namespace std;
// program to check whether a given number is an armstrong number or not 
int digitCount(int n) {
    int count=0;
    while(n!=0){
        n/= 10;
        count++;
    }
 return count;
}
int main(){
        int num;
        int sum=0;
    
        cout<<"enter the number:";
        cin>>num;
        int originalNum =num;
        int m= digitCount(num);

         while(originalNum!=0){
            int rem= (originalNum%10);
            sum= sum +(int)round( pow(rem,m));
            originalNum/=10;
         }
         if (sum== num){
            cout<<"armstrong number"<<endl;
         } else{
            cout<<"not an armstrong number"<<endl;
         }
    return 0;
}