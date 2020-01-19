
#include <iostream>
using namespace std;

int BinarySearch(int a[],int start_idx,int end_idx,int n)
{
    int mid;
    
    while(start_idx <= end_idx)
    {
        mid = (start_idx+end_idx)/2;
        
        if(n == a[mid])
        return mid;
        
        if(n > a[mid])
        {
            start_idx = mid+1;
        }
        
        if(n < a[mid])
        {
            end_idx = mid-1;
        }
        
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,7,9,15};

    int size = sizeof(arr)/sizeof(arr[0]);

    int val = BinarySearch(arr,0,size-1,15);
    
    (val == -1)?cout<<"The Element does not exist" :cout<<"The Element is at " << " " <<val<< " "  << "poisition" << endl;
    
    return 0;
}

