class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=0,end=0;
        int ans=-1;
        for(auto num:weights){
            end+=num;
            if(num>start)start=num;
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            int day=1,curr=0;
            for(auto w:weights){
                curr+=w;
                if(curr>mid){
                    day++;
                    curr=w;
                }
            }
            if(day<=days){
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;
        }
        return ans;
    }
};