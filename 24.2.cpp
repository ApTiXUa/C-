#include <iostream>
using namespace std;

int main()
{
    int a, b, c, *pmin, *pmax;
    
    cout<<"Enter a,b,c"; //«читуютьс€ три числа
    cin>>a >>b >>c;

    pmin = &a; // —початку вважаЇмо, що a Ч м≥н≥мум
    if(*pmin>b) // якщо b менше Ч зм≥нюЇмо вказ≥вник
        pmin = &b;
    if(*pmin>c) // якщо c менше за поточний м≥н≥мум Ч оновлюЇмо
        pmin = &c;

    pmax = &a; // —початку вважаЇмо, що a Ч максимум
    if(*pmax<b) // якщо b б≥льше Ч оновлюЇмо
        pmax = &b;
    if(*pmax<c) // якщо c ще б≥льше Ч оновлюЇмо
        pmax = &c;

    cout<<"Max: "<<*pmax <<" Address of max:"<<pmax <<endl;
    cout<<"Min: "<<*pmin <<" Address of min:"<<pmin <<endl;
    return 0;
}
