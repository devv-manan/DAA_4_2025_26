class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& nums, int k) {
        // code here
        
        // CODE 1
        int n=nums.size();
        vector<int> v;
        for(int i=0;i<n-k+1;i++){
            int maxi=INT_MIN;
            for(int j=i;j<i+k;j++){
                maxi=max(maxi,nums[j]);
            }
            v.push_back(maxi);
        }
        return v;
        
    }
};