// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low,mid,high,ans=0;
        low=1;
        high=n;
        while(low<=high){
            mid=low+((high-low)/2);
            if(isBadVersion(mid)==1){
                high=mid-1;
                ans=mid;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};

// Linear Search -> O(n)
// Binary Search -> O(logn)