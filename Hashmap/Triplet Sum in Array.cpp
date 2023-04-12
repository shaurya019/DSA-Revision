    bool find3Numbers(int a[], int n, int x)
   {
   sort(a,a+n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int k=n-1;
            int j=i+1;
            while(j<k)
            {
                sum=a[i]+a[j]+a[k];
                if(sum<x)
                    j++;
                else if(sum>x)
                    k--;
                else
                    return true;
            }
        }
        return false;
}