/*
Prog By ANOM DEVGUN
GR 21810017
VIIT Pune
*/
#include<iostream>
using namespace std;
class com
{
float re;
float im;
public:
    friend ostream & operator << (ostream &out, const com &c);
    friend istream & operator >> (istream &in,  com &c);
com()
{
re=0;
im=0;
}
com operator +(com c2)
{
com tem;
tem.re=re + c2.re;
tem.im=im + c2.im;
return tem;
}
com operator *(com c2)
{
com te;
te.re=(re * c2.re) - (im * c2.im);
te.im=(re * c2.im) + (c2.re * im) ;
return te;
}
void op()
{
if(im<0)
cout<<"Complex Number: "<<re<<im<<"i\n";
else
cout<<"Complex Number: "<<re<<"+"<<im<<"i\n";
}
};
ostream & operator << (ostream &out, const com &c)
{
    out << c.re;
    out << "+" << c.im <<"i"<< endl;
    return out;
}

istream & operator >> (istream &in,  com &c)
{
    cout << "Enter Real Part \n";
    in >> c.re;
    cout << "Enter Imaginary Part \n";
    in >> c.im;
    return in;
}
int main()
{
com c1,c2,ad,mu;
cout<<"Enter first complex number:\n";
cin>> c1;
cout<<"Enter second complex number:\n";
cin>>c2;
cout<<"Addition Gives: \n";
ad=c1 + c2;
cout<<ad;
cout<<"Multiplication gives: \n";
mu=c1 * c2;
cout<<mu;
return 0;
}
