#include<iostream>
using namespace std;
int binsearch(int a[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(x>a[mid])
        {
            low=mid+1;
        }
        else if(x<a[mid])
        {
            high=mid-1;
        }
        else
        {
          return mid+1;
        }
    }
    return 0;
}
int main()
{
    int size,result,a[100],n,i;
    cout<<"enter no. of elements:";
    cin>>n;
    cout<<"enter the elements of array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    size=10;
    cout<<"elements of array are:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }    
    int x;
    cout<<"enter the number to be searched:"<<endl;
    cin>>x;
    result=binsearch(a,size,x);
    if(result)
    {
        cout<<x<<"is present in the array at index"<<result-1;
    }
    else
    {
        cout<<x<<"is not present in the array";
    }
    return 0;
}