#include <iostream>
using namespace std;

bool k(long long n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)return false;
         
    }
    return true; 
}

void flag(long long n)
{
    int j;
    for(int i=2;i<n;i++)
    {
        j=n-i;
        if(k(i)&&k(j))
        {
            cout<<i<<"+"<<j<<"="<<n<<endl;
            return;
        }
    }
    cout<<"Error"<<endl;
}

int main(int argc, char *argv[])
{
    long long num = 2, a, b, c, d;
    bool k1, k2;
    cin>>a;
    for(num=6;num<=a;num+=2)
    {
        cout<<num<<" ";
        flag(num);
    }
    return 0; 
}
