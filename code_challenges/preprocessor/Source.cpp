/* Enter your macros here */
/* Enter your macros here */
#define toStr(x) #x 
#define io(v) cin >> v
#define INF 10000000
#define FUNCTION(a,b) void a(int& curr, int& next){if(next b curr){curr=next;}}
#define foreach(a,b)for(int b =0; b < v.size();b++)



#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, < )
	FUNCTION(maximum, > )

	int main() {
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result = ) << ' ' << ans;
	return 0;

}