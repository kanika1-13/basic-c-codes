#include<iostream>
using namespace std;
int main()
{
    int i=1,n,odd=0;
    cout<<"\nEnter the Ending value:";
    cin>>n;
    cout<<"\nEven numbers:";
    while(i<=n)
    {
        if(i%2!=0)
        {
            cout<<"\n"<<i;
            odd++;
        }
        i++;

    }
        cout<<"\nTotal odd numbers till 100 is : "<<odd;
        return 0;

}