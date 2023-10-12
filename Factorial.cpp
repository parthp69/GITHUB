#include <iostream>
using namespace std;

int main(){
    int n,ans=1,inst=0;

    inst++;
    cout<<"Enter a number to get factorial: ";

    inst++;
    cin>>n;

    for(int i=1;i<=n;i++){
        inst++;
        ans = ans*i;
        inst++;
    }

    inst++;
    cout<<"The Factorial for "<<n<<" is: "<<ans<<endl;

    inst++;
    cout<<"The Number of Instructions Executed are: "<<inst;
}
