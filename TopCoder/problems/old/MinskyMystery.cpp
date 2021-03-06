using namespace std;
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>

#define foreach(x, v) for (typeof (v).begin() x=(v).begin(); x !=(v).end(); ++x)
#define For(i, a, b) for (int i=(a); i<(b); ++i)
#define D(x) cout << #x " is " << (x) << endl

class MinskyMystery {
  public:
  int computeAnswer(long long N);

  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { long long Arg0 = 2LL; int Arg1 = 9; verify_case(0, Arg1, computeAnswer(Arg0)); }
	void test_case_1() { long long Arg0 = 3LL; int Arg1 = 27; verify_case(1, Arg1, computeAnswer(Arg0)); }
	void test_case_2() { long long Arg0 = 4LL; int Arg1 = 16; verify_case(2, Arg1, computeAnswer(Arg0)); }
	void test_case_3() { long long Arg0 = 2401LL; int Arg1 = 59058; verify_case(3, Arg1, computeAnswer(Arg0)); }
	void test_case_4() { long long Arg0 = 24LL; int Arg1 = 86; verify_case(4, Arg1, computeAnswer(Arg0)); }

// END CUT HERE

};

int MinskyMystery::computeAnswer(long long N) {
  
}

// BEGIN CUT HERE
int main(){
    MinskyMystery ___test;
    ___test.run_test(-1);
    return 0;
}
// END CUT HERE
