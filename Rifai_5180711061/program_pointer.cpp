#include <iostream>
using namespace :: std;
int main(){
long*P;
long X;
P = &X;
X = 20;
cout<<"Nilai X :_"<<X<<endl;
cout<<"Nilai *P:_"<<*P<<endl;
cout<<"Nilai P:_"<<P<<endl;
cout<<"Nilai &X:_"<<&X<<endl;

*P = 50;

cout<<"Nilai X :_"<<X<<endl;
cout<<"Nilai *P:_"<<*P<<endl;
cout<<"Nilai P:_"<<P<<endl;
cout<<"Nilai &X:_"<<&X<<endl;

}
