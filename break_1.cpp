#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=14){
        if(i==7){
            break;
        }
        cout<<i<<endl;
        i++;
    }
    cout<<"Out of the loop now"<<endl;
    return 0;
}