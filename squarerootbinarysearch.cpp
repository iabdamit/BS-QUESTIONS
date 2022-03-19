#include<iostream>
using namespace std;
int squareroot(int n){
   //if the no. is out of integer range use long long int in place of int
   int s=0;
   int e=n;//here no. is given by 0;
   int mid=s+(e-s)/2;
   int ans=-1;
    while(s<=e){
        int square=mid*mid;//so mid =square root
        if (square==n)
        {
            return mid;
        }
        if (square<n)
        {
           ans=mid;
           s=mid+1;
        }
       else
       {
           e=mid-1;
       }
        mid=s+(e-s)/2;
    }
    return ans;
    
}


int main()
{
    int arr[100];
    int n;
    cin>>n;
    cout<<squareroot(n);
    return 0;
}