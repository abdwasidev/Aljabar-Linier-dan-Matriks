#include <stdio.h>
#include <stdlib.h>

// Final Project <Aljabar dan Linear Matriks>
// Matriks 2x2 dan 3x3
 
int main(){
	// Inisiasi tipe data
	int pilihan, baris, kolom, i, j, matrik1[10][10], matrik2[10][10], hasil[10][10], determinan;
	
	do {
		printf("Pilih dari Dua Matriks Di Bawah ini!\n");
		printf("1. Matrik Ordo 2 X 2\n");
		printf("2. Matrik Ordo 3 X 3\n\n");
		printf("Pilihan Anda: ");
		scanf("%i", &pilihan);
		
		printf("\n");
		
		switch(pilihan){
			case 1:
				printf("Anda Memilih Matrik Ordo 2 X 2\n\n");
				
				baris = 2;
				kolom = 2;
				
				// Input Baris dan Kolom
				printf("Baris Matriks adalah %i\n", baris);
				printf("Kolom Matriks adalah %i\n", kolom);
			
				printf("\n");
				
				// Input Matriks Pertama
				printf("Input Nilai ke Matrik Pertama :\n");
				for (i = 0; i < baris; i++){
					for (j = 0; j < kolom; j++){
						printf("Input Matriks 1[%d][%d]: ",i+1,j+1);
						scanf("%d",&matrik1[i][j]);
				  	}
				}
				
				printf("\n");
				
				// Output Matriks Pertama
				printf("Matrik Pertama : \n");
				for (i=0; i< baris; i++){
					for (j=0; j<kolom; j++){
				   		printf("%3d", matrik1[i][j]);
				   }
				   printf("\n");
				}
				
				printf("\n");
				
				// Input Matriks Kedua
				printf("Input Nilai ke Matrik Kedua :\n");
				for (i = 0; i < baris; i++){   	
				  	for (j = 0 ; j < kolom; j++){
				  		printf("Input Matriks 2[%d][%d]: ",i+1,j+1);
						scanf("%d",&matrik2[i][j]);
				  	}
				}
				
				printf("\n");
				
				// Output Matriks Kedua
				printf("Matrik Kedua : \n");
				for (i=0; i< baris; i++){
					for (j=0; j<kolom; j++){
				   		printf("%3d", matrik2[i][j]);
				   }
				   printf("\n");
				}
				
				printf("\n");
				
				// Penjumlahan Matriks  
				printf("Hasil Penjumlahan Matrik :\n");
				for (i = 0; i < baris; i++) {
				  	for (j = 0 ; j < kolom; j++) {
				    	hasil[i][j] = matrik1[i][j] + matrik2[i][j];
				     	printf("  %d\t", hasil[i][j]);
				  	}
				  	printf("\n");
				}
				
				printf("\n");
				
				// Pengurangan Matriks
				printf("Hasil Pengurangan Matrik :\n");
				for (i = 0; i < baris; i++) {
				  	for (j = 0 ; j < kolom; j++) {
				    	hasil[i][j] = matrik1[i][j] - matrik2[i][j];
				    	printf("  %d\t", hasil[i][j]);
				  	}
				  	printf("\n");
				}
				
				printf("\n");
			    
			    // Perkalian Matriks
			    printf("Hasil Perkalian Matrik :\n");
			    for(i = 0; i < baris; i++){
			      	for(j = 0; j < kolom; j++){
			        	hasil[i][j] = hasil[i][j] + (matrik1[i][j] * matrik2[i][j]);
			        	printf("  %d\t", hasil[i][j]);
			      	}
			      	printf("\n");
			    }
			    
			    printf("\n");
			    
			    // Determinan Matriks
			    printf("Hasil Determinan Matrik Pertama :\n");
			    determinan = (matrik1[0][0] * matrik1[1][1]) - (matrik1[0][1] * matrik1[1][0]);
			    printf("Determinan Matriks Pertama adalah %i\n", determinan);
			    
			    printf("\n");
			    
			    printf("Hasil Determinan Matrik Kedua :\n");
			    determinan = (matrik2[0][0] * matrik2[1][1]) - (matrik2[0][1] * matrik2[1][0]);
			    printf("Determinan Matriks Kedua adalah %i\n", determinan);
			    
				printf("\n");
				
				return 0;
			break;
			case 2:
				printf("Anda Memilih Matrik Ordo 3 X 3\n\n");
				
				baris = 3;
				kolom = 3;
				
				// Input Baris dan Kolom
				printf("Baris Matriks adalah %i\n", baris);
				printf("Kolom Matriks adalah %i\n", kolom);
			
				printf("\n");
				
				// Input Matriks Pertama
				printf("Input Nilai ke Matrik Pertama :\n");
				for (i = 0; i < baris; i++){
				  	for (j = 0; j < kolom; j++){
				 		printf("Input Matriks 1[%d][%d]: ",i+1,j+1);
						scanf("%d",&matrik1[i][j]);
				  }
				}
				
				printf("\n");
				
				// Output Matriks Pertama
				printf("Matrik Pertama : \n");
				for (i=0; i< baris; i++){
					for (j=0; j<kolom; j++){
				   		printf("%3d", matrik1[i][j]);
				   }
				   printf("\n");
				}
				
				printf("\n");
				
				// Input Matriks Kedua
				printf("Input Nilai ke Matrik Kedua :\n");
				for (i = 0; i < baris; i++){   	
				  	for (j = 0 ; j < kolom; j++){
				  		printf("Input Matriks 2[%d][%d]: ",i+1,j+1);
						scanf("%d",&matrik2[i][j]);
				  	}
				}
				
				printf("\n");
				
				// Output Matriks Kedua
				printf("Matrik Kedua : \n");
				for (i=0; i< baris; i++){
					for (j=0; j<kolom; j++){
				   		printf("%3d", matrik2[i][j]);
				   }
				   printf("\n");
				}
				
				printf("\n");
				
				// Penjumlahan Matriks  
				printf("Hasil Penjumlahan Matrik :\n");
				for (i = 0; i < baris; i++) {
				  	for (j = 0 ; j < kolom; j++) {
				     	hasil[i][j] = matrik1[i][j] + matrik2[i][j];
				    	printf("%d\t", hasil[i][j]);
				  	}
				  	printf("\n");
				}
				
				printf("\n");
				
				// Pengurangan Matriks
				printf("Hasil Pengurangan Matrik :\n");
				for (i = 0; i < baris; i++) {
				  	for (j = 0 ; j < kolom; j++) {
				     	hasil[i][j] = matrik1[i][j] - matrik2[i][j];
				     	printf("%d\t", hasil[i][j]);
				  	}
				  	printf("\n");
				}
				
				printf("\n");
			    
			    // Perkalian Matriks
			    printf("Hasil Perkalian Matrik :\n");
			    for(i = 0; i < baris; i++){
			      	for(j = 0; j < kolom; j++){
			        	hasil[i][j] = hasil[i][j] + (matrik1[i][j] * matrik2[i][j]);
			        	printf("%d\t", hasil[i][j]);
			      	}
			      	printf("\n");
			    }
			    
			    printf("\n");
			    
			    // Determinan Matriks
			    printf("Hasil Determinan Matrik Pertama :\n");
			    determinan = matrik1[0][0] * ((matrik1[1][1] * matrik1[2][2]) - (matrik1[2][1] * matrik1[1][2])) -matrik1[0][1] * (matrik1[1][0] * matrik1[2][2] - matrik1[2][0] * matrik1[1][2]) + matrik1[0][2] * (matrik1[1][0] * matrik1[2][1] - matrik1[2][0] * matrik1[1][1]);
			    printf("Determinan Matriks Pertama adalah %i\n", determinan);
			    
			    printf("\n");
			    
			    printf("Hasil Determinan Matrik Kedua :\n");
			    determinan = matrik1[0][0] * ((matrik1[1][1] * matrik2[2][2]) - (matrik2[2][1] * matrik2[1][2])) -matrik2[0][1] * (matrik2[1][0] * matrik2[2][2] - matrik2[2][0] * matrik2[1][2]) + matrik2[0][2] * (matrik2[1][0] * matrik2[2][1] - matrik2[2][0] * matrik2[1][1]);
			    printf("Determinan Matriks Kedua adalah %i\n", determinan);
			    
				printf("\n");
				
				return 0;
			break;
			default:
				printf("Anda Salah Memasukkan Pilihan.\n");
				printf("Silahkan Masukkan Ulang Pilihan Anda.\n\n");
		}
	} while (pilihan != 1 && pilihan != 2);
	
	printf("\n");
}
