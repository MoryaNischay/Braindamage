#include<iostream>
using namespace std;
class base{};
class derived : public base{};
int main(){
    base b;
    derived d;
    int i=0;
    try{
        if (i==0){
            throw d;
        }
    }
    catch (base d){
        cout<<"Caught in Base class"<<endl;
    }
    catch (derived n){
        cout<<"Will this execute? ";
    }
}