#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
cin>>n;
int ans=0;
int i=0;
while(n!=0)
{
    int bit=n&1;//for ex. 5=101,
    ans=(bit*pow(10,i))+ans;//(10^0)
    n=n>>1;
    i++;

}
cout<<"answer is "<<ans<<endl;
   
}