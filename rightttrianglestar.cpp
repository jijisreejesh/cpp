#include<iostream>
using namespace std;
int main()
{
    int i,a,j,x;
    cout<<"Enter  the no.of rows :  ";
    cin>>a;
    x=a;
    for(i=0;i<a;i++)
    {
       for(x=a;x>i;x--)
        {
            cout<<"  ";
        }
        for(j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
   return 0; 
}