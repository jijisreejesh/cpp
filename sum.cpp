#include<iostream>
using namespace std;
class sum
{
    public:
    int a,b;
    
    void add(int,int);
};
void sum::add(int m,int n)
{
    int c;
    c=m+n;
    cout<<c;
}
int main()
{
    sum s;
    cout<<"Enter 2 nums : ";
    cin>>s.a>>s.b;
    cout<<"Sum : ";
    s.add(s.a,s.b);
    return 0;
}

