#include<iostream>
using namespace std;
int peakmountain(int arr[],int n){
int start=0;
int end=n-1;
int mid=start+(end-start)/2;
while (start<end)
{
    if (arr[mid]<arr[mid+1])//means peak is right side of mid
    {
       start=mid+1;
    }
    else
    {
      end=mid;//peak is left side of mid or at the mid
    }
    mid=start+(end-start)/2;
}
return start;
}
int main(){
int arr[7]={1,2,3,4,3,2,1};
cout<<"peak element "<<peakmountain(arr,7);
    return 0;
}
