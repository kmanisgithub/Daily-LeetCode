class Solution {
public:
    bool check(vector<int>& nums) {
    const int size=nums.size();
    int rotations=0;
    for(int i=0; i<size; ++i){
      if(nums[i]>nums[(i+1)%size ] &&  ++rotations>1){
         return false;
      }
    }
    return true;
  }
};
