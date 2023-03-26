#include <iostream>
#include <bits/stdc++.h>
#define mod 10000007
using namespace std;
#define ull unsigned long long int
#define ll long long
#include <vector>
#include <set>
#include <string>


vector<string> LCS(string A, string B, int m, int n, auto &lookup)
{

	if (m == 0 || n == 0)
	{
		return {""};
	}

	if (A[m - 1] == B[n - 1])
	{
		vector<string> lcs = LCS(A, B, m - 1, n - 1, lookup);

		for (string &str : lcs)
		{
			str.push_back(A[m - 1]);
		
		}

		return lcs;
	}

	if (lookup[m - 1][n] > lookup[m][n - 1])
	{
		return LCS(A, B, m - 1, n, lookup);
	}

	if (lookup[m][n - 1] > lookup[m - 1][n])
	{
		return LCS(A, B, m, n - 1, lookup);
	}

	vector<string> top = LCS(A, B, m - 1, n, lookup);
	vector<string> left = LCS(A, B, m, n - 1, lookup);

	top.insert(top.end(), left.begin(), left.end());

	return top;
}

int LCSLength(string A, string B, int m, int n)
{

  if (m == 0 || n == 0)
  {
    return 0;
  }

  if (A[m - 1] == B[n - 1])
  {
    return LCSLength(A, B, m - 1, n - 1) + 1;
  }

  return max(LCSLength(A, B, m, n - 1), LCSLength(A, B, m - 1, n));
  

}

set<string> LCS(string A, string B)
{
	int m = A.length(), n = B.length();

	vector<vector<int>> lookup(m + 1, vector<int>(n + 1));

	LCSLength(A, B, m, n);

	vector<string> v = LCS(A, B, m, n, lookup);

	set<string> lcs(make_move_iterator(v.begin()), make_move_iterator(v.end()));

	return lcs;
}

int main()
{
	string A = "hello", B = "hll";

	set<string> lcs = LCS(A, B);

	int y = 0;
	int x = LCSLength(A, B, A.length(), B.length());
	
	cout << endl;
	cout << "String A: " << A << endl;
	cout << "String B: " << B << endl;
	cout << endl;

	cout << "The Longest Subsequence are: " << endl;
	for (string str : lcs)
	{
		if (str.size()==0)
		{
			y=0;
		}
		else if (str.size()==x)
		{
			
			cout << str << endl;
			y++;
		}	
		
		
		
	}
	cout << endl;
	cout << "The number of such longest common subsequence between A and B: " << y << endl;
	cout << endl;
	cout << "The length of the LCS is " << LCSLength(A, B, A.length(), B.length()) << endl;
	cout << endl;
	cout << "x + 5y= " << x+(5*y) <<endl;

	return 0;
}
