#include<iostream>
using namespace std;
division(int x,int y){
    float temp;
    try {
    if (y==0){
        throw ("Error Division by 0");
    }
        }    
    catch (const char* e){cout<<e<<endl;}
    temp=x/y;
    return temp;
}
int main(){
    int a,b;
    cout<<"Enter the number \n";
    cin>>a;
    cout<<"Enter the number to be divided by: \n";
    cin>>b;
    int c=division(a,b);
    cout<<c;
}