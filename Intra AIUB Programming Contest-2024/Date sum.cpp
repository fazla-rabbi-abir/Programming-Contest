/*

A. Print the "Date Sum"

Limits 1s, 512 MB

If we write today’s date in a format : ddmmyy, we can treat it as a large number.
What is the sum of digits of this number?

For example: if today was March 31, 3025, then we could write it as : 31033025, if we sum up the digits we get
3 + 1 + 0 +3 + 3 + 0 + 2 + 5 = 17

Today is March 01, 2024. Print one integer denoting the sum of digits if we denote today’s date as a number like the above.

Sample
There is no sample input output for this problem. Just print the desired integer. Happy Coding.

*/


#include<iostream>
using namespace std;

int main()
{
	string date = "01032024";
	int sum = 0;
	for(char digit : date)
		{
			sum += digit - '0';
		}
	cout << sum << endl;

}
