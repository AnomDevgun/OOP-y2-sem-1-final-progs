/*
Prog By ANOM DEVGUN
GR 21810017
VIIT Pune
*/
#include<iostream>
using namespace std;
template <class T>
void s_sort(T a[],T n)
{
     int i,j,min;
     T t;
     for(i=0;i<n-1;i++)
     {
     min=i;
                     for(j=i+1;j<n;j++)
                     {
                                       if(a[j]<a[min])
                                       {
                                               min=j;
                                       }
                     }
                     t = a[min];
                     a[min]= a[i];
                     a[i]= t;
     }
}


int main()
{
    int a[100],i,n;
    float c[100],f;
    cout<<"Enter The number of Element in integer array:\n";
    cin>>n;
    cout<<"\nEnter Elements:\n";
    for(i=0;i<n;i++)
    {
                    cin>>a[i];
    }
    s_sort(a,n);
    cout<<"\nAfter Sorting\n";
    for(i=0;i<n;i++)
    {
                    cout<<a[i]<<" ";
    }
    cout<<"\n";
    cout<<"Enter The number of Element in float array:\n";
    cin>>f;
    cout<<"\nEnter Elements:\n";
    for(i=0;i<f;i++)
    {
                    cin>>c[i];
    }
    s_sort(c,f);
    cout<<"\nAfter Sorting\n";
    for(i=0;i<f;i++)
    {
                    cout<<c[i]<<" ";
    }
cout<<"\n";    
    return 0;
}

