class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     while(nums1.size()>m){
            nums1.pop_back();
        }
        for(int j=0; j<n; j++){
            nums1.push_back(nums2[j]);
        }
        sort(nums1.begin(), nums1.end());
    }
};
Link-(https://leetcode.com/problems/merge-sorted-array/description/)
