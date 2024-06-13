#include<iostream>
using namespace std;

void findFirstOccurance(int arr[],int n,int target,int &ansIndex){
        int start =0;
        int end =n-1;
        int mid =start +((end-start)/2);

        while(start<=end){
            //updation hmesa bhul ja rhi
             int mid =start +((end-start)/2);
            if(arr[mid]==target){
                //answer found but it may or may not be first  occurance
                //applying store and compute strategy
                //taking by refrence(&) value as ansindex as we want to
               // change original value of the variable
               //normal call by value will reflect changes at copy of the variable not original one 
               ansIndex =mid;
               //for first occurance go to 
               //left
               end =mid-1;
            }
            else if(arr[mid]<target){
                start =mid+1;
            }
            else if(arr[mid]>target){
                end =mid-1;
            }
        }
}

int main(){
   int arr[]={10,15,20,20,20,20,30,40,50};
   int n =sizeof(arr)/sizeof(arr[0]);
   int target=50;
   int ansind =-1;
   //to return first occurance index of array
   //binary search lgane ja rhi pkka sorted hoga
   findFirstOccurance(arr,n,target, ansind); 
cout<<"FIRST OCCURENCE OF :"<<target <<" is "<<ansind;
    return 0;
}