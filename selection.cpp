#include<iostream>
#include<vector>
using namespace std;

int print(vector <int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void selectionsort(vector <int> &v){
    int n =v.size();
    int j;
    for(int i=0;i<n-1;i++){
        int min_index =i; //ith element is assumed to be minimum 
        for(j=i+1;j<n;j++){
            if(v[min_index]>v[j]){
                min_index =j;
            }
        }
    }
}

void swap(int a,int b){
     int temp =a;
         a =b;
        b =temp; 
}



int main(){
    vector <int> v ={4,2,78,56,44,1,22};
    print(v);
    selectionsort(v);
    print(v);
    return 0;
}