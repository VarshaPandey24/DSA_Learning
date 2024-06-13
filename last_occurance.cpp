#include<iostream>
#include<vector>
using namespace std;

void last_occurance(vector <int> v,int target,int &ansIndex){
             
             int n =v.size();
             int start =0;
             int end =n-1;
             int mid =start +((end -start)/2);

             while(start<=end){
                //fir bhul gyi update expression
                int mid =start +((end -start)/2);
                if(v[mid]==target){
                    ansIndex =mid;
                    //moving to right to get last occurance
                    start =mid+1;
                }
                else if(v[mid]>target){
                            end =mid-1;
                }
                else if(v[mid]<target){
                    start =mid+1;
                }
             }
}

int main(){
    vector <int> v ={1,3,3,3,4,5,6,6};
    int ans =-1;
    last_occurance(v,6,ans);
    cout<<"the last occuring index of 6 is "<<ans;
}