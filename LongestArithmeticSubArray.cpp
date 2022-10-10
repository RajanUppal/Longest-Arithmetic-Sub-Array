/* Problem -
An arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal.
For example, [9, IO], [3, 3, 3], and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.
Determine the length of the longest contiguous arithmetic subarray.
*/

#include<iostream>
using namespace std;

void longestArithmeticSubArray(int a[], int n)
{
    int j=2, ans=2, pd=a[1]-a[0], curr=2; // Previous Common Difference (pd), Current Arithmetic Subarray length (curr), Max arithmetic subarray length (ans)
    while(j<n)
    {
        if(pd == a[j]-a[j-1])
        {
            curr++;
        }
        else
        {
            pd = a[j]-a[j-1];
            curr = 2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<"Size of Longest Arithmetic Sub-array : "<<ans;
}

int main()
{
    int n,i;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the Array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    longestArithmeticSubArray(a,n);
    return 0;
}
