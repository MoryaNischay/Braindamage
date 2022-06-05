#include <iostream>
using namespace std;
template <class T>
T SumOfArray(T a[],int n){
    int temp=0;
    for (int i=0;i<n;i++){
        temp=temp+a[i];
    }
    cout<<"The sum of the array is: "<<temp<<endl;
    
}
int main(){
    int n;
    int a[n];
    cout<<"Enter the number of elements in the array";
    cin>>n;
    for (int j=0;j<n;j++){
        cout<<"Enter the "<<j+1 << " Element"<<endl;
        cin>>a[j];
    }
    for (int j=0;j<n;j++){
        cout<<"the value"<<a[j];
    }
    cout<<"lol"<<a[2];
   
}