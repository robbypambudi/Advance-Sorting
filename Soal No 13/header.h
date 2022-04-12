/*
    Nama Kelompok :
    1. Robby Ulung Pambudi
    2. M. Armand Giovani
    3. Fathin Muhashibi Putra
*/

/* Deskripsi
    Anda diberikan list n angka. 
    Tulis algoritma yang efisien untuk menemukan (i) yang terkecil 
    (ii), terbesar, (iii) rata-rata, (iv) median (nilai tengah), 
    dan (v) modus (nilai yang paling sering muncul).
*/

// Fungsi makeHeap in C

#include <stdio.h>

extern int modes, num; 

void split(int a[], int mid, int l, int r, int *ll, int *rr);
int median(int arr[], int l, int r);
void findmodes(int arr[], int l, int r);
void swap(int *a, int *b);
int partition(int arr[], int low, int high);
void quicksort(int arr[], int l, int r);
int maxi(int arr[], int l, int r);
int mini(int arr[], int l, int r);
int modus(int arr[], int l, int r);
double meann(int arr[], int l, int r);