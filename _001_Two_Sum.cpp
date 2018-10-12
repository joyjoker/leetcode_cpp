#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cctype>
#include <string>
#include <queue>
#include <vector>
#include <stack>
#include <set>
#include <map>
#include <cstdlib>
#define ALL(x) ((x).begin()),((x).end())
#define RESET(a,b) memset(a,b, sizeof a)
#define ZERO(a) memset(a,0,sizeof(a))
#define MINUS(a) memset(a,0xff,sizeof(a))
#define LEN(X) strlen(X)
#define FI(a,b,c) for(int a=b; a<c; a++)
#define FD(a,b,c) for(int a=b; a>c; a--)
using namespace std;
typedef long long ll;
typedef long long LL;
typedef double db;
typedef double D;
typedef long double ld;
typedef long double LD;
/*********default*********/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> map;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++) {
        	int cur = target - nums[i];
        	if(map.find(cur) != map.end()) {
        		result.push_back(map[cur]);
        		result.push_back(i);
        		return result;
			} 
			map[nums[i]] = i;
		}
    }
};

int main() {
	Solution s;
	vector<int> nums = {2, 7, 11, 15};
	int target = 9;
	vector<int> result;
	result = s.twoSum(nums, target);
	for(int v : result) {
		cout << v << " ";
	}
	return 0;
}

