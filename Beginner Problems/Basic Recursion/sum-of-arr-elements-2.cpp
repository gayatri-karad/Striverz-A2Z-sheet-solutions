class Solution{	
	public:
    
		int arraySum(vector<int>& nums,int i=0){
          int n=nums.size();
            if(i==n)return 0;
            return nums[i]+arraySum(nums,i+1);
            
		}
};
