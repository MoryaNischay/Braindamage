#include<iostream>
#include<cstring>
using namespace std;
class Exc{
    public:
    char str_what[80];
    int what;
    Exc(){
        *str_what=0;
        what =0;
    }
    Exc(char* s,int x){
        strcpy(str_what,s);
        what=x;
    }
};
int main(){
    int i;
    try{
        cout<<"Enter a positive number: ";
        cin>>i;
        if(i<0){
            throw Exc("Not Positive",i);
        }
    }
    catch (Exc e){
        cout<<e.str_what;
        cout<<e.what<<endl;
    }
}