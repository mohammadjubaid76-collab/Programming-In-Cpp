#include<iostream>
using namespace std;
class Test {
    public:
    int x;
    void show(){
        cout<<x;

    };
    int main(){
        Test obj;
        Test*ptr= &obj;
        ptr-> x=20;
        ptr-> show();
        return 0;
        
    }
     
}