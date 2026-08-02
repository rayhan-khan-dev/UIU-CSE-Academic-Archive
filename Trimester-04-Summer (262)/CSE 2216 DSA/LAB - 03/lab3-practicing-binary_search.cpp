#include<iostream>
#include<vector>

using namespace std;

int binarySearch(const vector<int>& arr, int key)
{

    int left = 0;
    int right = arr.size() - 1;

    while(left <= right)
    {

        int mid = ( left + right ) / 2;

        if(arr[mid] == key)
        {

            return mid;
        }
        else if( arr[mid] > key)
        {
            right = mid - 1 ;
        }
        else
        {
            left = mid + 1 ;
        }
    }

    return -1 ;

}


int main()
{


    int size;
    cout<< "Enter The Size of The Array: " ;
    cin>> size;


    vector<int> arr;
    cout<< "Enter "<< size << " Elements (MUST BE SORTED): ";
    for(int i=0; i<size; i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }

    int key;
    cout<<"Enter The Element To Search: " ;
    cin>>key;

    int index = binarySearch(arr,key);

    if(index != -1)
    {
        cout<<"Found At Index " << index << endl;
    }
    else
{

    cout<<"Not Found , ERROR 404 " << endl;
}

return 0;
}
