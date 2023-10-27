# CPPDS_miniproject
## Problem Statement -
Word frequency counter and storing it in hash tables.

## Algorithm
1. Prompt the user to enter text.
2. Create an empty unordered map to store word-frequency pairs.
3. Create an empty string to store the input text.
4. Read a line of text from the user and store it in the string.
5. Create an input string stream (istringstream) and initialize it with the input text.
6. While there are words in the input stream:
   a. Read the next word.
   b. Clean the word (e.g., remove punctuation, convert to lowercase).
   c. Check if the word is already in the unordered map.
   d. If the word is in the map, increment its frequency.
   e. If the word is not in the map, add it to the map with a frequency of 1.
7. Print "Word Frequencies:" to indicate the following output.
8. For each word-frequency pair in the unordered map:
   a. Print the word.
   b. Print a colon and a space.
   c. Print the frequency of the word.
   d. Print a new line to move to the next pair.
9. End the program.

## Input
![image](https://github.com/Yaduraj01/CPPDS_miniproject/assets/110488113/c04591e3-7d96-4fc4-8cd8-2b90fc8ce1c7)


## Output
![image](https://github.com/Yaduraj01/CPPDS_miniproject/assets/110488113/46b7be68-ad0b-4704-962c-eb5c1004fca4)




