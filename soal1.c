/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 01 Overview of C Language
 *   Hari dan Tanggal    : Selasa 14 April 2026
 *   Nama (NIM)          : Geraldo Son Luther Silalahi (13224018)
 *   Nama File           : soal1.c
 *   Deskripsi           : Soal1 - Menara Lampu
 * 
 */


 #include <stdio.h>
 #include <string.h>

int main (){
    int i, N;
    scanf("%d", &N);
    for (i = 0; i <= N; i++){
        if (i % 2 == 0 && i % 3 == 0 ){
            printf("BIRU\n");
        } else if (i % 3 == 0){
            printf("MERAH\n");
        } else if (i % 2 == 0){
            printf("KUNING\n");
        } else if (i >= 10 && i % 2 == 0){
            printf("HIJAU\n");
        } else{
            printf ("%d\n", i);
        }
    }

    return 0;
}
