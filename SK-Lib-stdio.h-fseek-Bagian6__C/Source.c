#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {

    FILE* pFile = fopen("test.txt", "wb");

    //menulis konten dalam file
    fputs("This is a test file.", pFile);

    //set indikator posisi file saat ini ke
    //10 byte diukur dari awal file
    fseek(pFile, 10, SEEK_SET);

    //modifikasi konten setelah 10 byte
    fputs("modified content.", pFile);

    //tutup file
    fclose(pFile);

    //buka file dalam mode baca untuk membaca
    //isi file
    pFile = fopen("test.txt", "r");
    int c = fgetc(pFile);
    
    while (c != EOF) {
        putchar(c);
        c = fgetc(pFile);
    }

    //tutup file
    fclose(pFile);

    _getch();
    return 0;
}