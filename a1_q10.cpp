#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //printing all prime factors of n;
    for(int i=2; i<=n;i++){
        if(n%i==0){
            bool prime=1;
            for(int j=2; j<=i/2;j++){
                if(i%j==0){
                    prime = 0;
                    break;
                }
            }
            if(prime==1){
                cout<<i<<endl;
            }
        }
    }
}
