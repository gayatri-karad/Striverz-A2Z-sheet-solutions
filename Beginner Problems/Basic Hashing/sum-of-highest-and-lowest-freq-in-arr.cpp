class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int maxfreq=INT_MIN, ans1=0;
        for(auto it:mpp){
            if(it.second>maxfreq){
                maxfreq=it.second;
                ans1=it.first;
            }
        }
        int minfreq=INT_MAX,ans2=0;
        for(auto it:mpp){
            if(it.second<minfreq){
                minfreq=it.second;
                ans2=it.first;
            }
        }
      return maxfreq+minfreq;
    }
};
