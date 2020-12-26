class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>> ans;
        
        if(v.size()==0)
            return ans;
        sort(v.begin(),v.end());
        int i=1,a=v[0][0],b=v[0][1];
        while(i<v.size())
        {
            if(b>=v[i][0] && a<=v[i][1])
            {
                b=max(b,v[i][1]);
                a=min(a,v[i][0]);
                
            }
            else
            {
                ans.push_back({a,b});
                b=v[i][1];
                a=v[i][0];
            }
            i++;
        }
        ans.push_back({a,b});
        return ans;
        
        
    }
    
};
