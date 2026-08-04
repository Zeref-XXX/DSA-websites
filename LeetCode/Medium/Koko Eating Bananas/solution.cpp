class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        if (piles.size() == 1) {
            int total_time = piles[0] / h;
            if (piles[0] % h)
                total_time++;
            return total_time;
        }

        int start = 1;
        int end = 1;

        for (auto num : piles) {
            if (num > end)
                end = num;
        }

        int ans = -1;
        while (start <= end) {
            int mid = (start + end) / 2;
            long long hour = 0;

            for (int i = 0; i < piles.size(); i++) {
                hour += piles[i] / mid;
                if (piles[i] % mid)
                    hour++;
            }
            cout << start << " " << end << endl;
            if (hour <= h) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};