#include <iostream>
using namespace std;
class complex{
    int real,img;
    public:
    istream &operator >>(istream &in){
        
        cout<<"Enter real part";
        
        in>>real;
        cout<<"Enter Imaginary part: \n";
        in>>img;
        return in;
    }
    ostream &operator <<(ostream &out){
        out<<"Complex Number is: ";
        out<<real;
        out<<"+";
        out<<img<<"i"<<endl;
        return out;
    }

};
int main(){
    complex c1,c2,c3;
    c1>>cin;
    c1<<cout;
}