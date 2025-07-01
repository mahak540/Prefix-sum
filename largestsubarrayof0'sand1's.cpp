class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        unordered_map<int,int>mp;
        int res=0;
        int presum=0;
        for(int i=0;i<arr.size();i++)
        {
            presum+=(arr[i]==0) ? -1 : 1;
            if(presum==0)
            res=i+1;
            else if(mp.find(presum)!=mp.end())
            res=max(res,i-mp[presum]);
            else
            mp[presum]=i;
        }
        return res;
    }
};
