#include<iostream>
using namespace std;
int main()
{
    int i,a,j;
    cout<<"Enter  the no.of rows :  ";
    cin>>a;
    for (i = 0; i < a; i++)
    {
        for(j=0;j<a;j++)
        {
            cout<<" * ";
        }
        cout<<"\n";
    }
   return 0; 
}