#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    clock_t s,e;
    int a[10],n;

    cout<<"enter number of elements: ";cin>>n;

    cout<<"enter elements of array\n";
    for(int i=0; i<n; i++)
        cin>>a[i];

    cout<<"elements of array are\n";
    for(int i=0; i<n; i++)
        cout<<a[i]<<"\t";

    cout<<"\nusing bubble sort\n";
    s=clock();
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    e=clock();

    cout<<"\nelements of sorted array are\n";
    for(int i=0; i<n; i++)
        cout<<a[i]<<"\t";

    float ans=((float)(e-s))/CLOCKS_PER_SEC;
    cout<<"\ntime analysis: "<<ans;

    return 0;
}
