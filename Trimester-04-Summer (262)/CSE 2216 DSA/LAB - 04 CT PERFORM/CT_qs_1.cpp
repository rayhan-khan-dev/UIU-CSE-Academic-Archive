#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void Cube_sort(vector<int> &arr){

int n = arr.size();


for(int i=0; i<n-1; i++){

    for(int j=0; j<n-i-1; j++){


    long long cube1 = (long long)arr[j]*arr[j]*arr[j];
    long long cube2 = (long long)arr[j+1]*arr[j+1]*arr[j+1];


        if(cube1 < cube2){

            swap(arr[j],arr[j+1]);
        }
    }
}

}

int main(){


cout<<"Enter the size of array: ";
int size;
cin>>size;



cout<<"Enter "<< size << " elements: ";
vector<int> arr(size);
for(int i=0; i<size; i++){
    cin>>arr[i];
}


Cube_sort(arr);


cout<<"After Cube Sorting";
for(int x : arr){
    cout<< x << " ";
}

cout<<endl;
return 0;

}
