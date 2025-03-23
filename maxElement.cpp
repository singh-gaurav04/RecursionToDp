#include <bits/stdc++.h>
using namespace std;


int solve(int arr[],int size, int i){
  if(i == size){
    return INT_MIN;
  }

  return max(arr[i],solve(arr,size,i+1));
}

int main() {
 int size  = 5;
  int arr[]={10,35,60,64,5};

  cout<<solve(arr,size,0)<<endl;
  return 0;
}