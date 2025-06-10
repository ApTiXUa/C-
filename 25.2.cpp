#include <iostream>

using namespace std;

int main()
{
    float a[30]; //Оголошення змінних та зчитування масиву
    int n;
    cout<<"Enter n:";
    cin>>n;

    cout<<"Enter array:";

    for(int i=0;i<n;i++)
	{
        cin>>a[i];
    }
    
    float *p=a; //Оголошення вказівника і змінної індексу
    int ind;
    
    for(int i=0;i<=n-3;i++) //Пошук спадної послідовності довжиною 3
	{
        if(*(a+i)>*(a+i+1)&&*(a+i+1)>*(a+i+2))
        ind = i;
    }
    cout<<"Descending numbers start from index "<<ind; //Вивід результату
    return 0;
}
