class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n);
        stack<int> stack;
        result[n-1] = 0;
        stack.push(n-1);
        for (int i = n - 2; i >= 0; i--) {
            while (!stack.empty() && temperatures[stack.top()] <= temperatures[i]) {
                stack.pop();
        }
            // If there is a warmer day, calculate the distance
            if (!stack.empty()) {
                result[i] = stack.top() - i;
            }

            // Current day becomes a candidate for earlier days
            stack.push(i);
        }
        return result;
        // [0]
        // see [1] > [0] -> pop [0], push [1] ->  result[0] = 1 - 0
        // [1]
        // still < -> [1, 2]
        // still < -> [1, 2, 3 ] 
        // -> [1, 2, 3, 4]
        // see [5] > [1] -> add 5 - 1 -> result [1] = 5 - 1
        


        // [n-1] -> result[n-1] = 0
        // [n-2] -> result[n-2] = 0
        // [n-2, n-3] -> result[n-3] = 1
        // [n-2, n-4] -> result[n-4] = 2
        // [n-2, n-4, n-5]

    }
};
