#include<iostream>
using namespace std;
class shape{
public:
    double sidea, sideb;
    double area=0.00;
    shape()
    {
        sidea=0.00;
        sideb=0.00;
    }
};
class getda:public shape
{
public:
    void get_data()
    {
        cin>>sidea>>sideb;
    }
};
class pdata:public getda
{
public:
    void display_area(int n)
    {
        if(n == 2)
        {
            area = 0.5*sidea*sideb;
            cout<<area<<"\n";
        }
        else if(n == 1)
        {
            area = sidea*sideb;
            cout<<area<<"\n";
        }
        else{
            cout<<"Invalid choice try again.\n";
            return;
        }
    }
};
int main()
{
    int ch;
    pdata obj;
    while(1)
    {
    cout<<"1)For area of rectangle\n";
    cout<<"2)For area of triangle\n";
    cout<<"3)To exit\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
             obj.get_data();
        obj.display_area(ch);
        break;
        case 2:
            obj.get_data();
        obj.display_area(ch);
        break;
        case 3:
            cout<<"Now Exiting.\n";
            exit(0);
            break;
        default:
            cout<<"Invalid choice\n";
    }

}
}
