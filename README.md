<h1> DAA - Coding Assignment </h1>

Name: Rohit Bhojwani <br>
Roll No.: 57 <br>
Semester: 5th <br>
Section: A <br>
<hr>

<h3>Problem Statement: <h3>

<u>Consider two strings A = “qpqrr” and B = “pqprqrp”. Let x be the length of the longest common
subsequence (not necessarily contiguous) between A and B and let y be the number of such longest
common subsequence between A and B. 
<br>
Then x + 5y = </u>
<hr>

Table:

![unnamed](https://user-images.githubusercontent.com/91414774/202891817-9c558367-5737-4e4b-ad93-ead4670bda47.jpg)

<hr>
  
<Approach:>
 
If there is match, A[i, j] = A[i - 1, j - 1] + 1
<br>
If not match: max(A[i - 1, jl, A[i, j - 1])

<hr>
  
Output:

X = Length of longest common subsequence = 4
<br>
Y = Number of such longest common subsequence between A and B = 3

X + 5Y:
<br>
4 + (5*3) = 19

<hr>
  
Time Comlexity: O(N^2) 

<hr>
  
Test Cases:
<br>
Case 1:
<br>
  ![Screenshot (22)](https://user-images.githubusercontent.com/91414774/202909332-00f9a774-0424-4ceb-acf9-170efa33440e.png)
  
<br>
Case 2:
  <br>



