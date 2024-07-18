/**
PSEUDOCODE: 

algorithm LinearSearch
  Input: 
  Output: 

  Your pseudocode goes here. 

COMMENTS:

Add comments here that might help us to understand your 
thought process, especially if you're unable to finish the
pseudocode or code. This can help us award points in the 
code logic category. 
*/
int LinearSearch(int numbers[], int length, int n) {
	for (i = 0; i < length; i++) {
		if (numbers[i] == n)
			return i;
    }
	return -1;
}

/**
PSEUDOCODE: 

algorithm BinarySearch
  Input: 
  Output: 

  Your pseudocode goes here.

COMMENTS:

Add comments here that might help us to understand your 
thought process, especially if you're unable to finish the
pseudocode or code. This can help us award points in the 
code logic category. 
*/
int BinarySearch(int numbers[], int length, int n) {
	int lower_bound = 0;
	int upper_bound = length - 1;

	while (lower_bound <= upper_bound) {
		guess = (lower_bound + upper_bound) / 2;
		if numbers[guess] == n:
			return guess;
		else if numbers[guess] < n:
			lower_bound = guess + 1;
		else:
			upper_bound = guess - 1;
	}
  return -1;
}