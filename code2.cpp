// method 2 without converting into string

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        { int digit=0; // no of digit of ith array
            while(nums[i]!=0)
            {
            int rem =nums[i]%10;
            digit++;
            nums[i]/=10;     
            }
         if(digit%2==0)
             c++;
        }
       
      return c;      
        
    }
};
