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
Then x + 5y = <br> Write program for above objective with three test cases</u>
<hr>
  
  <Approach:>
 
If there is match, A[i, j] = A[i - 1, j - 1] + 1
<br>
If not match: max(A[i - 1, jl, A[i, j - 1])

<hr>

Table:

![unnamed](https://user-images.githubusercontent.com/91414774/202891817-9c558367-5737-4e4b-ad93-ead4670bda47.jpg)

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

![Screenshot (23)](https://user-images.githubusercontent.com/91414774/202920949-53136df2-42bb-45c9-8a3b-2d251bf786b8.png)
  
  <br>
  
Case 3:
  <br>
  ![Screenshot (24)](https://user-images.githubusercontent.com/91414774/202921085-43bf4f68-a261-4e1e-916d-bd624527572e.png)

