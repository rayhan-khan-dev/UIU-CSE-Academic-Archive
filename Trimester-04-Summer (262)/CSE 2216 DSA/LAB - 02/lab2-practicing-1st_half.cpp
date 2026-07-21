#include<iostream>

using namespace std;

void BubbbleSort1sthalf(int arr[],int n)
{
 int half = n/2;


    for(int i=0; i<half-1; i++)
    {

        for(int j=0; j<half-i-1; j++)
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

     int n = 6;
    int arr[] = {8, 3, 6, 1, 9, 2};


    BubbbleSort1sthalf(arr,n);
    display(arr,n);

    return 0;

}

