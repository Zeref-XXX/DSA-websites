class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        vector<int> mleft(size);
        vector<int> mright(size);
        int water = 0;
        mleft[0] = 0;
        for (int i = 1; i < size; i++)
            mleft[i] = max(mleft[i - 1], height[i - 1]);

        mright[size - 1] = 0;
        for (int i = size - 2; i >= 0; i--)
            mright[i] = max(mright[i + 1], height[i + 1]);

        for (int i = 0; i < size; i++) {
            int minHeight = min(mleft[i], mright[i]);
            if (minHeight - height[i] > 0)
                water += minHeight - height[i];
        }
        return water;
    }
};