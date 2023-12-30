#include <iostream>
using namespace std;

int main()
{
    int hi,low,mid,ans;
    int arr[] = {1,1,1,1,1,1,1,1,1,1,1};
    low = 0;
    hi = 10;
    while(low<=hi)
    {
        mid = low + (hi-low)/2;
        if(arr[mid] == 1)
        {
            ans = mid-1;
            hi = mid-1;
        }
        else{
            ans = mid;
            low = mid+1;
        }
    }
    cout << ans << "\n";
    return 0;
}