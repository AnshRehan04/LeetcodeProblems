// 7. Reverse Integer
// N=123-->321
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    int ans=0;
    while (n!=0)
    {
        int digit=n%10;  //n=123, 123%10-->3,12%10=2,1%10=1
        ans=(ans*10)+digit; //ans=(0*10)+3=3,(3*10)+2=32,(32*10)+1=321
        n=n/10;     //123/10=12,12/10,1/10 loop ends 
    }
    cout<<"Reverse of the no is :"<<ans<<endl;
    
}