#include<iostream>
using namespace std;
int pivot(int arr[],int n){
int start=0;
int end=n-1;
int mid=start+(end-start)/2;
while (start<end)
{
    if (arr[mid]>=arr[0])//first line
    {
       start=mid+1;
    }
    else
    {
      end=mid;
    }
    mid=start+(end-start)/2;
}
return start;
}
int main(){
int arr[5]={8,10,17,1,3};
cout<<"pivot is "<<pivot(arr,5);
    return 0;
}
