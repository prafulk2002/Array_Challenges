#include<iostream>
#include<climits>
using namespace std;

int kandane(int a[], int n)
{
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0; i<n; i++)
    {
        currsum+=a[i];
        if(currsum<0)
        {
            currsum=0;
        }
        maxsum=max(maxsum, currsum);
    }
    return maxsum;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int wrapsum;
    int non_wrapsum;
    non_wrapsum=kandane(a,n);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
        a[i]=-a[i];
    }
    wrapsum=sum+kandane(a, n);
    cout<<max(wrapsum, non_wrapsum)<<endl;
    return 0;
}