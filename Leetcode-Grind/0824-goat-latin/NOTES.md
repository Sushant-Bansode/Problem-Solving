Intuition
The intuition is to scan the string just once and do all the possible ammendmends.
​
Approach
An outer loop to check the first letter of each word, whilst an inner loop to traverse a particular word. Eventually, after each inner loop-cycle, the iterator of the outer loop is jumped to the first letter of the next word using value assignment.
​
Complexity
Time complexity: O(n)
Space complexity: O(1) if the output complexity is ignored, else the space complexity is
​
O(n^2).
​
How O(n^2) is derievd?
See, let's say for a string of length n, it is stated in the question, that the string only contains spaces and words. In order to find the maximum number of words in a given string of length n, we can say, that each word is of length 1=> only one-letter words are there in the string, only then the string will have the maximum number of words. Now, each word is seprated by a space => for a string of n->length will have n/2 letters/words and n/2 dspaces approx. Now, for each word in the Goat-Latin converted form will have an 'a' at its end, and the number a's at the end will be the words count. So, eg. => if sentence is "I A g h Y N"
then the Goat latin converted form will be, "Imaa Amaaa gmaaaa hmaaaaa Ymaaaaaa Nmaaaaaaa" Which in itself is meaning very large string compared to the orignal given string.
​
Let's decode and formulate the size of the output string:
So, if the string has length n, then for maximum number of words (Worst-case) it will have n/2 words. Like in above example, string length is 11, and the number of words are 6~11/2 so now n/2 "ma" will be put in the end. Thus, total length becomes, n+n/2. Now, for each of n/2 words an a will be inserted succesively increasing with each ward. So, first word will have single a in the end, while the last words will have n/2 a's at the end. Which forms an Ap. Sum of first n/2 numbers is=> n/2 * (n/2+1)/n/2 which becomes order of n^2.