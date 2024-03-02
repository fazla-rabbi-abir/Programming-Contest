/*
C. Make a Triangle

Limits 1s, 512 MB

Given A, B, C, D are the length of four sides that can be used to make a shape. You need to make a triangle with the given sides that has the maximum area.

Note: It has been made sure that a triangle can be made with any three sides in given test cases.


Input:

The first line of input contains an integer T denoting the number of test cases.

For each test case, there will be a line in the input containing four numbers A, B, C, D denoting the length of the sides.

Output:

Output the maximum area rounded up to 2 decimal places.

Constraints:

1 <= T  <= 10^5

1 <= A, B, C, D <= 10^5

Input
**3
6 9 5 9
6 10 5 9
6 7 6 3 **

Output
25.46
26.66
17.06
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        double A, B, C, D;
        cin >> A >> B >> C >> D;


        double maxArea = 0.0;

        double s1 = (A + B + C) / 2;
        double area1 = sqrt(s1 * (s1 - A) * (s1 - B) * (s1 - C));
        maxArea = max(maxArea, area1);


        double s2 = (A + B + D) / 2;
        double area2 = sqrt(s2 * (s2 - A) * (s2 - B) * (s2 - D));
        maxArea = max(maxArea, area2);


        double s3 = (A + C + D) / 2;
        double area3 = sqrt(s3 * (s3 - A) * (s3 - C) * (s3 - D));
        maxArea = max(maxArea, area3);


        double s4 = (B + C + D) / 2;
        double area4 = sqrt(s4 * (s4 - B) * (s4 - C) * (s4 - D));
        maxArea = max(maxArea, area4);

        cout << fixed << setprecision(2) << maxArea << endl;
    }

    return 0;
}
