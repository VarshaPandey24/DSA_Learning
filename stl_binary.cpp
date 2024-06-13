#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] ={1,2,3,4,5,6,7};
     int n =7;
     int target =4;
     bool ans =binary_search(arr,arr+n,target);
     cout<<"the target is persent or Not : "<<(ans ==1?"Present":"Not Present");
    return 0;
}