#include<iostream>
using namespace std;
int main()
{
    int i,a,j,k;
    cout<<"Enter  the no.of rows :  ";
    cin>>a;
    for(i=0;i<a;i++)
    {
        for(j=a;j>i;j--)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
   return 0; 
}