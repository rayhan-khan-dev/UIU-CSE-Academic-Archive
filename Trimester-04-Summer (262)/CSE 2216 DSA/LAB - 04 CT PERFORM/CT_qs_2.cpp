#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void Frequency_sort(vector<int> &arr)
{

    int n = arr.size();




    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
        int freq1 =0;
        for(int k=0; k<n; k++){
            if(arr[k]==arr[j])
                freq1++;
        }
        int freq2 =0;
        for(int k=0; k<n; k++){
            if(arr[k]==arr[j+1])
                freq2++;
        }



            if( freq1 > freq2)
            {
                swap(arr[j],arr[j+1]);

            }


        }
    }

}

int main()
{




    cout<<"Enter the size of array: ";
    int size;
    cin>>size;



    cout<<"Enter "<< size << " elements: ";
    vector<int> arr(size);
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }


    Frequency_sort(arr);


    cout<<"After Sorting: ";
    for(int x : arr)
    {
        cout<< x << " ";
    }

    cout<<endl;
    return 0;

}
