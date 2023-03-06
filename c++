Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Return the kth positive integer that is missing from this array.

****************************************************************************************************************************************8

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int start = 0, end = n-1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] - (mid + 1) < k)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return start + k;
    }
};
