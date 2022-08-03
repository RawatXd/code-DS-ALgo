class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0 ;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i] != 0){
                int ans = nums[i] ;
                for(int j = i ; j< nums.size() ;j++){
                nums[j] = nums[j] - ans ;                   
            }
                count++ ;
            }
            
        }
        return count ;
    }
};