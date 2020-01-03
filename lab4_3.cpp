#include<iostream>
using namespace std;

int findDivisor(int n)
{
    int i;
    while(n>1)
    {
        if(n%i==0 and i!=1)
        {
            return i;
        } else{
            i--;
        }      

    }

}

int main()
{
cout<<"output of 10 = "<<findDivisor(10) <<"\n";
cout<<"output of 97 = "<<findDivisor(97) <<"\n";
cout<<"output of 221= "<<findDivisor(221) <<"\n";
return 0;
}


