#include<iostream>

using namespace std;

void frequencySort(int arr[],int n)
{

    int freq[100]={0};

    for(int i=0; i<n; i++){
            freq[arr[i]]++;
    }

    for(int i=0; i<n-1; i++)
    {

        for(int j=0; j<n-i-1; j++)
        {


            if(freq[arr[j]]>freq[arr[j+1]])
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

    int arr[] = {5, 1, 3, 1, 3, 3};
    int n = sizeof(arr)/ sizeof(arr[0]);


   frequencySort(arr,n);
    display(arr,n);

    return 0;

}

