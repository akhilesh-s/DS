#minimum jumps need to reach the end of array

 int max(int a,int b)
    {
        return (a>b) ? a : b;
    }
    
    int jump(vector<int>& nums) {
        
        int n=nums.size();
        
        if(n==0)
            return 0;
        if(n==1)
            return 0;
        
        int i=1;
        int maxReach=nums[0];
        int steps=nums[0];
        int jump=1;
        
    
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
                return jump;
            
            maxReach=max(maxReach,i+nums[i]);
            
            steps--;
            
            if(steps==0)
            {
                jump++;
                if(i>=maxReach)
                    return -1;
                steps=maxReach-i;
                
                
            }
           
            
            
        }
         return -1;
    }
