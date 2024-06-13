#include<iostream>
#include<vector>
using namespace std;

//complexity O(log n)
int binary_search(vector <int> arr,int target){
    int n =arr.size();
    int start =0;
    int end =n-1;
 int mid =start +((end -start)/2);  
   

    while(start<end){
        int mid =start +((end -start)/2);
        if(arr[mid] ==target){
            return mid;
            break;
        }
        else if(arr[mid]<target){
            start =mid+1;  
        }
        else if(arr[mid]>target){
             end =mid-1;
        }  
         return -1;
    }    
}

int main(){
    vector <int> v ={1,2,3,4,5,6,7,8};
   int res= binary_search(v,4);
    cout<<"result is " <<res<<endl;
}


    
