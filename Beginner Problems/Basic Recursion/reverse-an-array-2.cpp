class Solution{	
	public:
		vector<int> reverseArray(vector<int>& nums){
            int n=nums.size();
            int i=0;
            int j=n-1;
            while(i<j){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
            return nums;
		}
};
