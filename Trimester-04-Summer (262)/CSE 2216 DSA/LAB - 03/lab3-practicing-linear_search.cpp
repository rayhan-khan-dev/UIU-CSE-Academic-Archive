#include<iostream>
#include<vector>

using namespace std;

int linearSearch(const vector<int> & arr, int key)
{


    for(int i=0; i<arr.size(); i++)
    {


        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;

}

int main()
{

    int size;
    cout<< "Enter The size of array: ";
    cin>> size;

    vector<int> arr(size);
    cout<<"Enter " << size << " elements: ";
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout<< "Enter the Searching Element: ";
    cin>>key;

    int result = linearSearch(arr, key);

    if(result != -1)
    {

        cout<< "Element Found at Index "<< result << endl;
    }
    else
    {

        cout<<"Element Not Found , ERROR 404"<< endl;
    }
    return 0;

}
