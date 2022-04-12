/*
Nama Kelompok :
1. Robby Ulung Pambudi
2. M. Armand Giovari
3. Fathin Muhashibi Putra
*/

/*
Deskripsi :
Anda diberi daftar (panjang) kata-kata bahasa Inggris. Buatlah program untuk menentukan yang mana dari
kata-kata adalah anagram satu sama lain. Output terdiri dari setiap kelompok anagram (dua atau lebih
kata) diikuti oleh baris kosong. Dua kata adalah anagram jika terdiri dari huruf yang sama,
seperti (teacher, cheater) dan (sister, resist)

Penyelesaian :

*/


// A C program to print all anagrams together
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// structure for each word of duplicate array
struct Word
{
    char *str; // to store word itself
    int index; // index of the word in the original array
};

// structure to represent duplicate array.
struct DupArray
{
    struct Word *array; // Array of words
    int size;           // Size of array
};

// Create a DupArray object that contains an array of Words
struct DupArray *createDupArray(char *str[], int size)
{
    // Allocate memory for dupArray and all members of it
    struct DupArray *dupArray = (struct DupArray *)malloc(sizeof(struct DupArray));
    dupArray->size = size;
    dupArray->array = (struct Word *)malloc(
        dupArray->size * sizeof(struct Word));

    // One by one copy words from the given wordArray to
    // dupArray
    int i;
    for (i = 0; i < size; ++i)
    {
        dupArray->array[i].index = i;
        dupArray->array[i].str = (char *)malloc(strlen(str[i]) + 1);
        strcpy(dupArray->array[i].str, str[i]);
    }

    return dupArray;
}


//Prototipe Fungsi
int compChar(const void *a, const void *b); // Function to compare two characters. Used in qsort() for sorting an array of characters (Word)
int compStr(const void *a, const void *b);// Function to compare two words. Used in qsort() for sorting an array of words
void printAnagramsTogether(char *wordArr[], int size); // Funtion to given a list of words in wordArr[],