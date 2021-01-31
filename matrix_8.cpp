int kthSmallest(int a[MAX][MAX], int n, int k)
{
  int mn=a[0][0],mx=a[n-1][n-1];
    while(mn<mx)
    {
        int mid=(mn+mx)/2;
        int place=0;
        for(int i=0;i<n;i++)
        {
            place+=upper_bound(a[i],a[i]+n,mid)-a[i];
        }
        if(place<k)
        mn=mid+1;
        else
        mx=mid;
    }
    return mn;
}
