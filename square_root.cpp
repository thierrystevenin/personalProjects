#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

/**
THIS FUNCTION IS PROVIDED AS PART OF THE STARTER CODE.
DO NOT MODIFY THIS FUNCTION. 
*/
std::string ConvertFloatToStr(float n, int precision) {
  std::stringstream ss; 
  ss << std::fixed << std::setprecision(precision) << n; 
  return ss.str();
}

/**
PSEUDOCODE: 

algorithm ApproxSqrt
  Input: 
  Output: 

  Your pseudocode goes here.

COMMENTS:

Add comments here that might help us to understand your 
thought process, especially if you're unable to finish the
pseudocode or code. This can help us award points in the 
code logic category. 
*/
std::string ApproxSqrt(int n, int iterations) {
	lower_bound = 0;
	upper_bound = n;
	for (i = 0; i < iterations; i++) {
		guess = (lower_bound + upper_bound) / 2;
		if (guess * guess == n)
			return guess;
		else if (guess * guess < n)
			lower_bound = guess;
		else
			upper_bound = guess;
	return guess;
	}
  // You may call ConvertFloatToStr as part of your solution.
return "";
}