/*
Prog By ANOM DEVGUN
GR 21810017
VIIT Pune
*/
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
class emp
{
   unsigned int mo,da,ye;
    string na,add;
    string idd;
    long long phno;
    string bg;
    string bgk;
    double sal;
    public:
    emp()
    {
        mo=05,da=19,ye=1999;
       idd="12345rtgs"; na="Anom Devgun"; add="Plot 313 Amar Srushti";
        sal=10900.30;
        phno=7590785487;
        bg="AB+";
        bgk="Invalid Blood Group";
        cout<<"Format of Entering Data\n";
        cout<<"Id:"<<idd<<endl;
        cout<<"Name:"<<na<<endl;
        cout<<"Date of Birth: "<<da<<"/"<<mo<<"/"<<ye<<endl;
        cout<<"Address:"<<add<<endl;
        cout<<"Salary:"<<sal<<endl;
        cout<<"Phone Number is :"<<"+91"<<phno<<"\n";
        cout<<"Blood Group is: "<<bg<<"\n";
    }
    int dat();
    void accept();
    void display();
};
int emp::dat()
    {
    int fa=1;
    cout<<"Enter Dob :\n";
    cout<<"Day :\n";
    cin>>da;
    cout<<"Month :\n";
    cin>>mo;
    cout<<"Year :\n";
    cin>>ye;
    cout<<"\n";
    if(da>31)
    {
        cout<<"Invalid Day Entered\n";
        fa=0;
        }
        if(da<1)
            {
            fa=0;
            cout<<"Invalid Day Entered\n";
            }
        if(mo<1)
            {
            fa=0;
            cout<<"Invalid Month Entered\n";
            }
        if(mo>12)
        {
        fa=0;
            cout<<"Invalid Month Entered\n";
        }
        if(ye<1)
        {
        fa=0;
            cout<<"Invalid Year Entered\n";
        } 
        if(fa==0)
        { 
        return 3;
        }
        else if(fa==1)
        {
        return 2;
        }
    }
void emp::accept()
{ 	
string bg1[9]={"A+","A-","B+","B-","AB+","AB-","O+","O-","\0"};
    int k=0,g=1;
    cout<<"Input Id:\n";
    cin.ignore();
    getline(cin,idd);
    cout<<"Input Name :\n";
    getline(cin,na);
    cout<<"Input Address :\n";
    getline(cin,add);
    void dat();
    cout<<"Enter Salary :\n";
    cin>>sal;
    cout<<"Enter BloodGroup :\n";
    cin.ignore();
    getline(cin,bg);
    for(k=0;bg1[k]!="\0";k++)
    {
        if(bg==bg1[k])
        {
        g=0;
        if(g==0)
        {
            bgk=bg1[k];
        }
        }
    }

}
void emp::display()
{
    cout<<"\nId is :"<<idd<<endl;
    cout<<"Name is :"<<na<<endl;
    cout<<"Address is :"<<add<<endl;
    cout<<"Date of Birth is :"<<da<<"/"<<mo<<"/"<<ye<<endl;
    cout<<"Salary is :"<<sal<<endl;
    cout<<"Blood Group is:"<<bgk<<"\n";
}
int main()
{
    int n,l;
    int fla=1;
    cout<<"Input Number of Employees : \n";
    cin>>n;
    emp obj[n];

    for(int i=0;i<n;i++)
    {
        obj[i].accept();
        while(fla==1)
        {
        l=obj[i].dat();
        if(l== 3)
        {
        obj[i].dat();
        }
        if(l== 2)
        {
        fla=0;
        }
        }
    }
    for(int j=0;j<n;j++)
    {
        obj[j].display();
    }
    return 0;
}
