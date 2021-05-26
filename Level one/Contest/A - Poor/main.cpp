#include <iostream>

using namespace std;
/*
Problem Statement
A triple of numbers is said to be poor when two of those numbers are equal but the other number is different from those two numbers.

You will be given three integers
A
,
B
, and
C
. If this triple is poor, print Yes; otherwise, print No.

Constraints
A
,
B
, and
C
 are all integers between
1
 and
9
 (inclusive).
Input
Input is given from Standard Input in the following format:

A

B

C

Output
If the given triple is poor, print Yes; otherwise, print No.

Sample Input 1
5 7 5
Sample Output 1
Yes
A
 and
C
 are equal, but
B
 is different from those two numbers, so this triple is poor.

Sample Input 2
4 4 4
Sample Output 2
No
A
,
B
, and
C
 are all equal, so this triple is not poor.

Sample Input 3
4 9 6
Sample Output 3
No
Sample Input 4
3 3 4
Sample Output 4
Yes

*/
int main()
{
   short A,B,C;
   cin>>A>>B>>C;
   if(((A==B || A==C)&& B!=C) || (B==C && A!=C) ){
      cout<<"Yes"<<endl;
   }else
   cout<<"No"<<endl;
    return 0;
}
