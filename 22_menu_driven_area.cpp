#include<iostream>
using namespace std;
int main()
{
    int l,b,h,r,ch;
    cout<<"1.Area of circle"<<endl<<"2.Area of rectangle"<<endl<<"3.Area of triangle"<<endl<<"4.Exit";
    cout<<endl;
    cout<<"enter your choice :";
    cin>>ch;
    switch(ch)
    {
        case 1: cout<<"enter radius ";
                cin>>r;
                cout<<"Area of circle= "<<(3.14*r*r);
                break;
        case 2: cout<<"enter length and breath ";
                cin>>l>>b;
                cout<<"Area of rectangle= "<<(l*b);
                break;
        case 3: cout<<"enter breath and height ";
                cin>>b>>h;
                cout<<"Area of triangle= "<<(b*h)/2;
                break;
        case 4: exit(0);
        default: cout<<"Invalid choice";
    }
    return 0;
}