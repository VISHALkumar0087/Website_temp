#include <iostream>
using namespace std;
int main() {
  int arr[8]={1,4,6,8,10,14,17,20};
  int target = 8;
  int l = 0 , r = 7;
  while(l<=r){
      int m = (l+r)/2;
      if(arr[m]==target){
          cout<<"ye rha : "<<m;
          break;
      }
      else if(arr[m]<target){
          l = m+1;
          
      }
      else{
          r = m-1;
      }
  }
    return 0;
}