#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no to be reversed"<<endl;
    cin>>n;
    int rev=0;
    int a=n;
    while(a!=0){
        int rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    cout<<"rev of no "<<n<<" is "<<rev;
}
