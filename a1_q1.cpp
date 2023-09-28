#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no u want z pattern in"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=2;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
    
    return 0;
}
