#include<iostream>
using namespace std;


void selection_sort(int arr[], int n)
{



    for(int i=0; i<n-1; i++)
    {
        int maxIndex = i;

        for(int j=i+1 ; j<n; j++)
        {

            if(arr[j]>arr[maxIndex])
                maxIndex=j;
        }

        swap(arr[i],arr[maxIndex]);
    }


}


int main ()
{

    int arr[]= {25,12,64,22,11};
    int n=5;


    selection_sort(arr,n);


    cout << "Sorted Array ";


    for(int i=0; i<n; i++)
        cout<<arr[i] << " ";

    return 0;

}
