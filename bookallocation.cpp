//code studio question lac. 15
#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    //cout << "checking for mid "<< mid <<endl;
    
    for(int i = 0; i<n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum = pageSum+arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid ) {
            return false;
        }
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
        //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}

int allocateBooks(int arr[], int n, int m) {
    int s = 0;
    int sum = 0;
    
    for(int i = 0; i<n; i++) {
        sum = sum+arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
            //cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
int arr[100];
int n;
cout<<" no of books ";
cin>>n;

cout<<" give the no. of pages of each books ";
for (int  i = 0; i < n; i++)
{
    
    cin>>arr[i];
}
int m;
cout<<" give no of students ";
cin>>m;
cout<<" miximum no. of pages assigned to a student is minimum is  ";
//maximum page jo ek bache ko de sakte he usme se minimum
cout<<allocateBooks(arr,n,m)<<endl;

    return 0;
}