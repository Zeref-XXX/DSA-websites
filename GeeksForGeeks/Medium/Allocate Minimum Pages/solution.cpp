class Solution {
	public:
	int findPages(vector<int> &arr, int k) {
		
		if(arr.size()<k) return -1;
		
		long long  start = 0;
		long long end = 0;
		for (auto num:arr) {
			end += num;
			if (num>start)start = num;
		}
// 		cout<<start<<" "<<end;
		int ans=-1;
		
		while(start<=end){
		    long long  mid=start+(end-start)/2;
		    long long page=0,students=1;
		    
		    for(int i=0;i<arr.size();i++){
		        page+=arr[i];
		        if(page>mid){
		            page=arr[i];
		            students++;
		        }
		    }
		    if(students<=k){
		        ans=mid;end=mid-1;
		    }
		    else start=mid+1;
		}
		return ans;
		
	}
};
