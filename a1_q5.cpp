#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count=count+1;
    }
    cout<<"the no of digits in "<<n<<" is "<<count;
    return 0;
}
