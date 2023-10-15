class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) {
            return {};
        }

        // Sort the intervals by their start values
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> output;
        vector<int> currentInterval = intervals[0];

        for (int i = 1; i < intervals.size(); i++) {
            if (currentInterval[1] >= intervals[i][0]) {
                // Merge the current interval with the next interval
                currentInterval[1] = max(currentInterval[1], intervals[i][1]);
            } else {
                // Disjoint intervals, push the current interval and update it
                output.push_back(currentInterval);
                currentInterval = intervals[i];
            }
        }

        // Push the last merged or remaining interval
        output.push_back(currentInterval);

        return output;
    }
};
