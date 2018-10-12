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
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
		if(numbers.size() < 2) {
			return result;
		}
		for(int i = 0, j = numbers.size() - 1; i < j; i++) {
			while(i < j && numbers[i] + numbers[j] < target) {
				i++;
			}
			if(numbers[i] + numbers[j] == target) {
				result.push_back(i + 1);
				result.push_back(j + 1);
				return result;
			}
			while(i < j && numbers[i] + numbers[j] > target) {
				j--;
			}
			if(numbers[i] + numbers[j] == target) {
				result.push_back(i + 1);
				result.push_back(j + 1);
				return result;
			}
		}
		return result;
    }
};

int main() {
	vector<int> numbers = {2, 3, 4};
	int target = 6;
	Solution s;
	vector<int> result = s.twoSum(numbers, target);
	for(int v : result) {
		cout << v << " ";
	}
	return 0;
}

