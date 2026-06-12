#include<iostream>
using namespace std;

int sum_of_digit(int n)
{
    cout<<"Name:Mohammad Jubaid"<<endl;
    cout<<"Roll No.:BETN1AI25080"<<endl;
    int digit,sum=0;
    while(n!=0)
    {
        digit = n%10;
        sum = sum + digit;
        n=n/10;
    }
    return sum;

}
int main()
{
    int number,digit_sum;
    cout<<"Enter positive integer within the range:";
    cin>>number;
    digit_sum=sum_of_digit(number);
    cout<<"sum of digit"<<number<<"lb."<<digit_sum;
    return 0;
}