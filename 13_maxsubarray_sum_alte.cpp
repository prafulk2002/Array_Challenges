#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
int currsum[n+1];
currsum[0];
for(int i=1; i<=n; i++)
{
    currsum[i]=currsum[i-1]+a[i-1];
}
int maxsum=INT_MIN;
for(int i=1; i<=n; i++)
{
    int sum=0;
    maxsum=max(maxsum, currsum[i]);
    for(int j=1; j<=i; j++)
    {
        sum=currsum[i]-currsum[j-1];
        maxsum=max(sum,maxsum);
    }
}
cout<<"maxsum="<<maxsum<<endl;
return 0;
}

