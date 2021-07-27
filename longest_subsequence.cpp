int Solution::longestSubsequenceLength(const vector<int> &A) {
  
  // longest subsequence = longest increasing subsequence + longest decreasing subsequence -1
    int n= A.size();
    if(n==0)
        return 0;

    vector<int> lis(n,1), lds(n,1);

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(A[i]>A[j])
                lis[i]=max(lis[i], lis[j]+1);
        }
    }


    for(int i=n-2;i>=0;i--)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
                lds[i]=max(lds[i], lds[j]+1);
        }
    }

    int maxx=-1;
    for(int i=0;i<n;++i)
    {
        maxx=max(maxx,lis[i]+lds[i]);
    }

    return maxx-1;

}
