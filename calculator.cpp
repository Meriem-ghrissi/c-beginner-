// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void cal(){
    int a,b;
    char op;
    cout<<"give the first number"<<endl;
    cin>>a;
    cout<<"give the operator"<<endl;
    cin>>op;
    cout<<"give the second number"<<endl;
    cin>>b;
    switch(op){
        case('+'):
          cout<<a+b<<endl;
          break;
        case('-'):
          cout<<a-b<<endl;
          break;
        case('*'):
          cout<<a*b<<endl;
          break;
        default:
          cout<<"rewrite the operator"<<endl;
          
    }  }
int main() {
    cal();

    
}
