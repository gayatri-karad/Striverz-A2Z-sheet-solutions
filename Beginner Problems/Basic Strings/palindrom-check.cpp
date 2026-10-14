class Solution{	
	public:		
		bool palindromeCheck(string& s){
            int n=s.length();
            for(int i=0;i<n;i++){
                if(s[i]!=s[n-1-i])return false;
            }
            return true;
		}
};
