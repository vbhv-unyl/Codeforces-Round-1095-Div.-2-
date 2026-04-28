/*
The idea of this problem is that if I want to achieve a missing number x

Then we must get it from division by number >= x + 1, so we can infact
get x form just (divisor + x) present in the array.

Say for getting x by x+1, the number to look for will be x + 1 + x = 2*X+1
Any number greater than this will also yeild x as remainder but a smaller number
won't work

So we can maintain a multiset and for missing number search atleast 2*X+1.
This way when we can't find amy number it is our mex.
*/ 

// Code goes here

#include<bits/stdc++.h>
using namespace std;

int32_t main() {
}
