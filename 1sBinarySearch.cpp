#include <iostream>
using namespace std;
int main()
{int arr[5]={1,1,1,1,1};
int low=0;int high=4;int count;
while (low<high)
{int mid=(low+high)/2;
 if(arr[mid]==0)
    low=mid+1;
 else 
    {if(arr[mid-1]==0||mid==0)
	  {cout<<5-mid;
	  break;}
	 else 
	high=mid-1;
}}}

