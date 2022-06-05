#include<iostream>
using namespace std;
int main(){
    int i=0;
    try{
        try{
            if (i==0)
                throw i;
            }
        catch (int b){
            cout<<"Half Handle"<<endl;
             throw;
        }
    }
    
    catch (int a){
            cout<<"Full Handle";
        }
    return 0; 
}