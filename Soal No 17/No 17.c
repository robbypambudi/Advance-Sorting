// Sumber : https://www.geeksforgeeks.org/given-a-sequence-of-words-print-all-anagrams-together/


// C++ program to print anagrams
// together using dictionary
#include <bits/stdc++.h>
using namespace std;
 
void printAnagrams(string arr[], int size)
{
    unordered_map<string, vector<string> > map;
 
    // Loop over all words
    for (int i = 0; i < size; i++) {
 
        // Convert to char array, sort and
        // then re-convert to string
        string word = arr[i];
        char letters[word.size() + 1];
        strcpy(letters, word.c_str());
        sort(letters, letters + word.size() + 1);
        string newWord = "";
        for (int i = 0; i < word.size() + 1; i++) {
            newWord += letters[i];
        }
 
        // Calculate hashcode of string
        // after sorting
        if (map.find(newWord) != map.end()) {
            map[newWord].push_back(word);
        }
        else {
 
            // This is the first time we are
            // adding a word for a specific
            // hashcode
            vector<string> words;
            words.push_back(word);
            map[newWord] = words;
        }
    }
 
    // Print all the values where size is > 1
    // If you want to print non-anagrams,
    // just print the values having size = 1
    unordered_map<string, vector<string> >::iterator it;
    for (it = map.begin(); it != map.end(); it++) {
        vector<string> values = map[it->first];
        if (values.size() > 1) {
            cout << "[";
            for (int i = 0; i < values.size() - 1; i++) {
                cout << values[i] << ", ";
            }
            cout << values[values.size() - 1];
            cout << "]";
        }
    }
}
 
// Driver code
int main()
{
    string arr[] = { "cat", "dog", "tac", "god", "act" };
    int size = sizeof(arr) / sizeof(arr[0]);
 
    printAnagrams(arr, size);
 
    return 0;
}
 
// This code is contributed by Ankit Garg