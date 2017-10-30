#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <vector>
 
using namespace std;
 
int main()
{
	vector<int> srcVec;
	int init = 0;
	generate_n(back_inserter(srcVec), 10, [&] () mutable
	{
		return init++;
	});
 
	ostream_iterator<int> outIt(cout, " ");
	copy(srcVec.begin(), srcVec.end(), outIt);
	cout << endl << "init: " << init << endl;
 
	return EXIT_SUCCESS;
}