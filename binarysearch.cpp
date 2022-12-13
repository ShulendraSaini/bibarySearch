#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int s=0;
    int e=size-1;

    int mid = s+(e-s)/2;

    while(s<=e)
    {
        if(arr[mid==key]){
            return mid;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    return -1;
}
int main(){
      
      int even[6]={2,3,4,5,6,7};
      int odd[5]={4,6,7,8,9};

      int evenIndex = binarySearch(even,6,5);
      cout<<"index 5 is "<<evenIndex<<endl;

      int oddIndex = binarySearch(odd,5,6);
      cout<<"index of 6 is "<<oddIndex<<endl;


      return 0;
}
 