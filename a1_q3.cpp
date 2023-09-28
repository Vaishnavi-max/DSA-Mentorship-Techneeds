#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"enter how many times u want to check different nos"<<endl;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cout<<"enter the no to be checked"<<endl;
        cin>>n;
        for(int j=2;j<n;j++){
            if(n%j==0){
                cout<<"its not a prime no"<<endl;
                break;
            }
            else{
                cout<<"its a prime no"<<endl;
                break;
            }
            
        }
       
    }
    return 0;
}
