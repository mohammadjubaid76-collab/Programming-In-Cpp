#include<iostream>
using namespace std;
int main(){
    int n=123456;
    int digitSum=0;
    while(n>0){
        int lastDigit = n%10;
        cout<<lastDigit<<" ";
        digitSum+=lastDigit;
        n=n/10;
    }
    cout<<"Sum= "<<digitSum<<endl;
    return 0;
}