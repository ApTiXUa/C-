#include <iostream>

using namespace std;

int main()
{
    float a = 10.4, c = 3.1, *p;
    p = &a;
    *p = *p*3+c;
    p = &c;
    cout<<"Address of a: "<<&a <<endl; //Адреса А
    cout<<"Address of c: "<<&c <<endl; // Адреса С
    cout<<"Address of pointer p: "<<&p <<endl; // Адреса вказівника р
    cout<<"Address pointed to by pointer p: "<<p <<endl; // адреса на яку вказує вказівник р
    cout<<"Value of a: "<<a <<endl; //значення а
    cout<<"Value of c: "<<c <<endl; //значення с
    cout<<"Value pointed to by pointer p: "<<*p <<endl; // значення на яке вказуе вказівник р
    return 0;
}
