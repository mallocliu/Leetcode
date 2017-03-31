class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		auto cbeg = nums.begin(), cend = nums.end();
		for (auto beg = nums.begin(); beg != cend; ++beg) {
			auto pos = find(cbeg, cend, target - *beg);
			if (pos !=beg && pos != nums.end())
				return vector<int>{beg - nums.begin(), pos - nums.begin()};
		}
	}
};