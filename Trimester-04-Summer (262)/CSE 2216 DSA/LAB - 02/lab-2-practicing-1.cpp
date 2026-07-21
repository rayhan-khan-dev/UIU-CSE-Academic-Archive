#include<iostream>

using namespace std;

void BubbbleSort(int arr[],int n)
{

    for(int i=0; i<n-1; i++)
    {

        for(int j=0; j<n-i-1; j++)
        {


            if(arr[j]>arr[j+1])
            {

                  swap(arr[j],arr[j+1]);

                //int temp = arr[j];
                //arr[j]=arr[j+1];
                //arr[j+1]= temp;
            }

        }

    }


}

void display(int arr[], int n)
{

    cout << "Sorted Array: ";
    for(int i=0; i<n; i++)
    {

        cout << arr[i] << " ";
    }

}

int main ()
{

    int arr[]= {64,30,15,35,12};
    int n = sizeof(arr)/ sizeof(arr[0]);


    BubbbleSort(arr,n);
    display(arr,n);

    return 0;

}
