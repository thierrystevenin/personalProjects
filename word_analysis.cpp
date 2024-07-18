#include <string>

/**
PSEUDOCODE: 

algorithm MinimumWordLength
  Input: 
  Output: 

  Your pseudocode goes here. 

COMMENTS:

Add comments here that might help us to understand your 
thought process, especially if you're unable to finish the
pseudocode or code. This can help us award points in the 
code logic category. 
*/
int MinimumWordLength(std::string words[], int length) {
	int tempLength = 0;
	for (int i = 0; i < length; i++) {
		if (i == 0)
			tempLength = words[i].length;
		else if (words[i].length < tempLength)
			words[i].length = tempLength;
	return i;
	}
}

/**
PSEUDOCODE: 

algorithm MaximumWordLength
  Input: 
  Output: 

  Your pseudocode goes here. 

COMMENTS:

Add comments here that might help us to understand your 
thought process, especially if you're unable to finish the
pseudocode or code. This can help us award points in the 
code logic category. 
*/
int MaximumWordLength(std::string words[], int length) {
	int tempLength = 0;
	for(int i = 0; i < length; i++) {
		if (i == 0)
			tempLength = words[i].length;
		else if (words[i].length > length)
			words[i].length = tempLength;
		return i;
	}
}

/**
PSEUDOCODE: 

algorithm RangeOfWordLengths
  Input: 
  Output: 

  Your pseudocode goes here. 

COMMENTS:

Add comments here that might help us to understand your 
thought process, especially if you're unable to finish the
pseudocode or code. This can help us award points in the 
code logic category. 
*/
int RangeOfWordLengths(std::string words[], int length) {
	return MaximumWordLength(std::string words[], int length) - MinimumWordLength(std::string words[], int length);
}

/**
PSEUDOCODE: 

algorithm WordLengthMean
  Input: 
  Output: 

  Your pseudocode goes here. 

COMMENTS:

Add comments here that might help us to understand your 
thought process, especially if you're unable to finish the
pseudocode or code. This can help us award points in the 
code logic category. 
*/
int WordLengthMean(std::string words[], int length) {
	int total = 0;
	int mean = 0;
	for (int i = 0; i < length; i++) {
		total += words[i].length;
	}
	mean = total / length;
	return mean;
}

/**
PSEUDOCODE: 

algorithm WordLengthMode
  Input: 
  Output: 

  Your pseudocode goes here. 

COMMENTS:

Add comments here that might help us to understand your 
thought process, especially if you're unable to finish the
pseudocode or code. This can help us award points in the 
code logic category. 
*/
int WordLengthMode(std::string words[], int length) {
	int number = 1;
	int total = 0;
	int mode = words[0].length;
	for (int i = 0; i < length; i++) {
		if (words[i].length == words[i + 1].length)
		{
			total += 1;
			if (number > total)
			{
				total = number;
				mode = words[i].length;
			}
		}
		else
			number = 1;
		}
	return mode;
}