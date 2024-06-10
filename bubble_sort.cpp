#include<iostream>
#include<vector>
using namespace std;

void Bubble_sort(vector <int> &v){
    int n =v.size();
    for (int i =0;i<v.size();i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}

void swap(int a,int b){
          int temp =a;
          a =b;
          b =temp;
}

int print(vector <int> v){
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector <int> v ={34,2,9,0,10};
     print(v);
     cout<<endl;
     Bubble_sort(v);
     print(v);

    return 0;
}