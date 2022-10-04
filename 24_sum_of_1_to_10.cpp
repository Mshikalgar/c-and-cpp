#include <iostream>
using namespace std; 
int main()
{
    int i=1,sum=0;
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }
    cout<<"sum of number from 1 to 10 = "<<sum;
    return 0;
}