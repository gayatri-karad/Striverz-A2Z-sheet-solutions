class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int maxFreq=0, secondmaxFreq=0;
        int maxElement=-1, secondmaxElement=-1;
        for(auto it:mpp){
            if(it.second>maxFreq){
                secondmaxElement=maxElement;
                secondmaxFreq=maxFreq;
                maxFreq=it.second;
                maxElement=it.first;

            }
        }
        return secondmaxElement;
    }
};
