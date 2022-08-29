class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int size = nums.size();
        int counter = 0;
        for(int i=0; i<size; i++){
//             converting each elements to string
            string s = to_string(nums[i]);
//             checking if the string size is even or not
            if(s.length() % 2 == 0)
                counter++;
        }
        return counter;
    }
};
