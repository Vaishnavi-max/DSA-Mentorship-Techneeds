#include <iostream>
using namespace std;
int main()
{
    int low;
    cout<<"enter the no from which u wanna check the prime nos"<<endl;
    cin>>low;
    int high;
    cout<<"enter the no till which u wanna check the prime nos"<<endl;
    cin>>high;
    for(int i=low;i<=high;i++)
    {
        for(int x=2;x<i;x++){
            if(i%x==0){
                cout<<i<<" is not a prime no"<<endl;
                break;
            }
            else{
                cout<<i<<" is  a prime no"<<endl;
                break;
            }
        }
    }
    return 0;
}
