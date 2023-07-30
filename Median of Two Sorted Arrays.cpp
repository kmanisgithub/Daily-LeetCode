class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for(auto i:nums1){
            arr.push_back(i);
        }
        for(auto i:nums2){
            arr.push_back(i);
        }
        sort(arr.begin(), arr.end());
        int n=arr.size();
        if(n%2 !=0){
            return arr[n/2];
        }else{
            return (arr[n/2]+arr[n/2-1])/float(2);
        }
    }
};
