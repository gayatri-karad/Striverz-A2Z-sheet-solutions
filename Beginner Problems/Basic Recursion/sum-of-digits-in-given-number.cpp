class Solution{
public:
int ans=0;
	int addDigits(int num){
       while(num>0){
         int rem=num%10;
        num/=10;
        ans+=rem;
       }
       if(ans<10)return ans;//the only hint i needed was that when ans will be single digit we will have to write it as    
       else{               //ans<10..i was getting confused in that
        num=ans;
        ans=0;
        addDigits(num);
       }
       return ans;
	}
};
