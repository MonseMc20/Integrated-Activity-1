# Integrated-Activity-1
Test cases part 3
Test Case 1: 
Files:
•	transmission1.txt: ABCDEFG
•	transmission2.txt: HIJKLMN

Expected Output:
Transmission 1: (0), (0)
Transmission 2: (0), (0)
Output:
Transmission 1: (0), (0)
Transmission 2: (0), (0)

Purpose of test: This case verifies that the algorithm correctly handles situations where there is no common substring at all. It tests if the matrix initializes properly and avoids false positives.

Test Case 2: 
Files:
•	transmission1.txt: HELLOWORLD
•	transmission2.txt: HELLOWORLD

Expected Output:
Transmission 1: (1), (10)
Transmission 2: (1), (10)
Output:
Transmission 1: (1), (10)
Transmission 2: (1), (10)

Purpose of test: This ensures the algorithm works correctly when one string is entirely contained in the other. It validates that the algorithm can find the maximum possible substring without prematurely stopping.

Test Case 3: 
Files:
•	transmission1.txt: ABCXXX
•	transmission2.txt: YYYZZZABC

Expected Output:
Transmission 1: (1), (3)
Transmission 2: (7), (9)
Output:
Transmission 1: (1), (3)
Transmission 2: (7), (9)
 
Purpose of test: This test verifies that the algorithm can correctly identify a substring that appears at the end of one string and at the beginning of the other. It ensures the solution does not only work for substrings that make a complete match, but also for substrings located wherever in the strings.
