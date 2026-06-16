#include<iostream>
using namespace std;
int main(){
    int n=4;
    
    for(int i=1;i<=n;i++){
        
        // spaces print
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        // stars print
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }

        cout<<endl;
    }
    
    return 0;
}