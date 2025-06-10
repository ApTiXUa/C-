#include <iostream>
using namespace std;

int main()
{
    float a[30]; //Оголошення змінних та зчитування масиву
    int n;

    cout<< "Enter n: ";
    cin>>n;

    cout<< "Enter array: "; //Ввід розміру і значень масиву
    for(int i=0;i<n;i++) 
	{
        cin>>a[i];
    }

    float min=a[0]; //Початкове мінімальне значення

    for(int i=0;i<n;i+=2) 
	{
        if (a[i]<min) //Цикл пошуку мінімального на парних індексах
		{
            min=a[i];
        }
    }

    cout
	<< "Minimum on even indices: " << min; //Виведення результату
    return 0;
}
