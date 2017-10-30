#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>
 
using namespace std;

int main(int argc, char* argv[])
{
	vector<int> srcVec;
	for (int val = 0; val < 10; val++)
	{
		srcVec.push_back(val);
	}
 
    for_each(srcVec.begin(), srcVec.end(), 
        [] (int _n) { cout << _n << " "; }  // lambda
    );
	cout << endl;
 
	return EXIT_SUCCESS;
}
