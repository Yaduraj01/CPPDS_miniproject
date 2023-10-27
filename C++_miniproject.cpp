#include <iostream>
#include <unordered_map>
#include <sstream>
using namespace std;

int main() 
{
    string text;
    cout << "Enter the text: ";
    getline(cin, text);

    istringstream iss(text);
    unordered_map<std::string, int> wordFrequency; // Hash table to store word-frequency pairs

    string word;
    while (iss >> word) {
        // Clean the word (remove punctuation, convert to lowercase, etc. if needed)
        // For simplicity, assuming input text has words separated by spaces

        // Update word frequency in the hash table
        wordFrequency[word]++; // If word doesn't exist, it will be initialized to 0 and then incremented to 1
    }

    // Print word frequencies
    cout << "Word Frequencies:" << endl;
    for (const auto& pair : wordFrequency) {
        cout << pair.first << ": " << pair.second << endl;
    }
}
    