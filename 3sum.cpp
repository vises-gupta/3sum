class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        for(int i=0;i<nums.size();i++)
       {
            int s=0;
         for(int h=0;h<i;h++)
             if(nums[i]==nums[h])
             {
               s++;
                 break;
             }
            if(s==0)
            {
        int j=i+1,k=nums.size()-1;
        if(i==j)
            j++;
        while(j<k)
        {
           if(nums[j]+nums[k]<(-nums[i]))
               j++;
            else if(nums[j]+nums[k]>(-nums[i]))
                k--;
            else
            {
                vector<int> vi;
                vi.push_back(nums[i]);
                vi.push_back(nums[j]);
                vi.push_back(nums[k]);
                v.push_back(vi);
                j++;
                k--;
                
            
            }
        }
        }
    
    }    
        v.erase(unique(v.begin(), v.end()), v.end());
        return v;
    }
};
