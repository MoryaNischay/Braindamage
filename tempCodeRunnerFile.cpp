#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"b";
    }
};
class Do :public Base{
    public:
    Do(){
        cout<<"d";
    }
};
int main(){
    Do d;
}