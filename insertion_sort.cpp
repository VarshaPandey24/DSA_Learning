#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector <int> &v){
      int n =v.size();
      for(int i=1;i<n;i++){
        //during shifting process key may get lost that is why
        //we stored v[i] into a variable key==
        int key =v[i];
        int j =i-1;
        //moving elements greter than key to right side
        //and shifting them and putting the key at it correct place
        while(j>=0 && v[j]>key){
            v[j+1]=v[j];
            j--;
        }
        swap(v[j+1],key);
      }
}
void swap(int a,int b){
    int temp =a;
    a =b;
    b= temp;
}

void print(vector <int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector <int> v ={34,2,9,0,10};
     print(v);
     insertion_sort(v);
     print(v);
}