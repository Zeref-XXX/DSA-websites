class Solution {
public:
    int solve(int index, int n, int k, int personLeft, vector<bool> person) {
        if (personLeft == 1) {
            for (int i = 0; i < person.size(); i++) {
                if (person[i] == 0)
                    return i + 1;
            }
        } else {
            int kill = (k - 1) % n;
            while (kill--) {
                index = (index + 1) % n;
                while (person[index] == 1) {
                    index = (index + 1) % n;
                }
            }
            person[index] = 1;
            personLeft--;
            while (person[index] != 0) 
                index = (index + 1) % n;
            
        }
        return solve(index, n, k, personLeft, person);
    }
    int findTheWinner(int n, int k) {
        int personLeft = n;
        vector<bool> person(n, 0);
        return solve(0, n, k, personLeft, person);
    }
};