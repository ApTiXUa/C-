#include <iostream>

using namespace std;

int main()
{
    float a[30];
    int n,sum=0;
    cout<<"Enter n:"; //¬в≥д даних
    cin>>n;

    cout<<"Enter array:";

    for(int i=0;i<n;i++)
	{
        cin>>a[i];
    }
    float *p=a; // ¬каз≥вник на початок масиву
   
    for(int i=0;i<n;i++)
	{
        if(*(a+i)<0)
		{
        cout<<i<<" ";
        sum++;
        }
    }
    cout<<endl<<sum; //	¬ив≥д результату
    return 0;
}
