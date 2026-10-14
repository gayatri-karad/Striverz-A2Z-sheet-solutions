class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        map<int,int >mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        long big=INT_MIN;
        int ans=0;//for storing the key having highest value,i.e the element having highest frequency
        for(auto it:mpp){
            if(it.second>big){
                big=it.second;
                ans=it.first; 
            } //else if(it.second==big){  //because the map already stores keys in ascending order so even if tie happems
              //  ans=min(it.first,ans); //then the smallest key will be If you only update big when you find a strictly greater frequency (> instead of >=), you won't even need the tie-breaker else if block because the smaller element claims the spot first
           // }
        }
        return ans;
    }
};
