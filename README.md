# Integrated-Activity-1
## Anett Martínez Vázquez A01645043
Worked on chars sequence search (part 1)
## Monserrat Morales Cañez A01638959
Worked on the palindrome search (part 2)
## Héctor Ayala
Worked on the longest common substring search (part 3)


# Test Cases for part 2

For the second part, the test cases created had the functionality of testing the output of the cases 
where a text file has no palindromes, expecting a 1 1 result, and when it has a palindrome, 
expecting the final position minus the initial position to be the length of the palindrome, and 
each position being

# Test Case 1 No palindromes:

Files:
• Transmission1.txt: wertyuiorefcqgaryklcvweyugfdiopñzamqdtrejhgfiuytam
• Transimission2.txt: zxcasdqwevbndfgertmnlkjhyuiopñwertyuiopñgdazmcdjx

Results
Expected results Transmission1: 1 1
Results: 1 1
Expected results Transmission2: 1 1
Results: 1 1
5

# Test Case 2 Palindromes:

Files:
• Transmission1.txt: 
calkiuxfdqsxbazyunmakqncawqpwprlfkowvlegknxbhhwmajjhlqqpimqymoczqnoilmjybd
nyrojjgkibkpkolhbuknpnlrjikagdcqffchdjtzmkmztjdhcffqcdgakijaxa
• Transmission2.txt: 
gixwjdlpgogmocqolikvcibybrvfaywtypttsyldwrxndjhgfkfkqscevmjhpxphjmvecsqkfkfghjd
nxrwdlysttpythnwpbtysedkrapuecptfvlruqmtuhrlizzuccuzzilrhutmqurlvftpceuparkde
sytbz

Results:
Expected results Transmission1: 99 133
Results: 99 133
Expected results Transmission2: 97 160
Results: 97 160

## Test cases part 3
### Test Case 1: 
Files:
* transmission1.txt: ABCDEFG
* transmission2.txt: HIJKLMN

Expected Output:
* Transmission 1: (0), (0)
* Transmission 2: (0), (0)

Output:
* Transmission 1: (0), (0)
* Transmission 2: (0), (0)

Purpose of test: This case verifies that the algorithm correctly handles situations where there is no common substring at all. It tests if the matrix initializes properly and avoids false positives.

### Test Case 2: 
Files:
* transmission1.txt: HELLOWORLD
* transmission2.txt: HELLOWORLD

Expected Output:
* Transmission 1: (1), (10)
* Transmission 2: (1), (10)

Output:
* Transmission 1: (1), (10)
* Transmission 2: (1), (10)

Purpose of test: This ensures the algorithm works correctly when one string is entirely contained in the other. It validates that the algorithm can find the maximum possible substring without prematurely stopping.

### Test Case 3: 
Files:
* transmission1.txt: ABCXXX
* transmission2.txt: YYYZZZABC

Expected Output:
* Transmission 1: (1), (3)
* Transmission 2: (7), (9)

Output:
* Transmission 1: (1), (3)
* Transmission 2: (7), (9)
 
Purpose of test: This test verifies that the algorithm can correctly identify a substring that appears at the end of one string and at the beginning of the other. It ensures the solution does not only work for substrings that make a complete match, but also for substrings located wherever in the strings.
