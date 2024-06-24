#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for (i = 0; i < 7; i++)
    {
        if(i==0||i==6)
        {
        for(k=0;k<7;k++)
        {
            cout<<" * ";
        }
        }
        else
        {
            cout<<" * ";
            for(j=1;j<=8;j++)
            {
            cout<<"  ";
            }
            cout<<"*";
        }
        cout<<"\n";
    }
   return 0; 
}