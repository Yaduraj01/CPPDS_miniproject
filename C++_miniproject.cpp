#include <iostream>
#include <unordered_map>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

// Function to remove punctuation from a word
string removePunctuation(const string& word) {
    string result;
    for (char c : word) {
        if (!ispunct(c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    string text;
    cout << "Enter the text: ";
    getline(cin, text);

    istringstream iss(text);
    unordered_map<string, int> wordFrequency; // Hash table to store word-frequency pairs

    string rawWord;
    while (iss >> rawWord) {
        string word = removePunctuation(rawWord); // Remove punctuation from the word

        // Update word frequency in the hash table
        wordFrequency[word]++;
    }

    // Print word frequencies
    cout << "\nWord Frequencies:" << endl;
    for (const auto& pair : wordFrequency) {
        cout << pair.first << ": " << pair.second << " ; ";
    }
    cout << "\n";

    return 0;
}
