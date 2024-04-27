#include<stdio.h>

int main(){
	int uang, minum, saldo, j, tambah, pecahan;
	char drink[] = "1. Soda = 5000\n2. Bear Brand = 8000\n3. YOU C1000 = 7000\n4. Expresso = 10.000\n5. Americano = 11.500\n6. Latte = 12.000";
	
	printf("=========================================================\n");
	printf("\tSELAMAT DATANG DI PROGRAM FENDING MACHINE\n");
	printf("=========================================================\n");
	
ulang :
	printf("Masukkan nominal uang anda (tanpa titik) = ");
	scanf("%d", &uang);
	saldo = uang;
	
sini :
	printf("---------------------------------------------------------");
	printf("\nLIST MINUMAN\n%s\n\n", drink);
	
	printf("|=[ Saldo anda = %d ]=|", saldo);
	printf("\n--------------------------------------------------------");
	printf("\nMasukkan nomer minuman yang anda pilih = "), scanf("%d", &minum);
	switch(minum){
		case 1 : saldo -= 5000; printf("\nAnda memilih 'Soda'");
				printf("\n\n|=[ Saldo anda = %d ]=|\n", saldo); break;
		case 2 : saldo -= 8000; printf("Anda memilih 'Bear Brand'");
				printf("\n\n|=[ Saldo anda = %d ]=|\n", saldo); break;
		case 3 : saldo -= 7000; printf("Anda memilih 'YOU C1000'");
				printf("\n\n|=[ Saldo anda = %d ]=|\n", saldo); break;
		case 4 : saldo -= 10000; printf("Anda memilih 'Expresso'");
				printf("\n\n|=[ Saldo anda = %d ]=|\n", saldo); break;
		case 5 : saldo -= 11500; printf("Anda memilih 'Americano'");
				printf("\n\n|=[ Saldo anda = %d ]=|\n", saldo); break;
		case 6 : saldo -= 12000; printf("Anda memilih 'Latte'");
				printf("\n\n|=[ Saldo anda = %d ]=|\n", saldo); break;
	}
	if(saldo<0){
		printf("\nMaaf saldo anda kurang, minuman tidak dapat dibeli");
		printf("\nMasukkan nominal uang tambahan = "); scanf("%d", &tambah);
		saldo += tambah;
		if(tambah == 0 || tambah == '-'){
			goto end;
		}
	}
	if (saldo != 0){
		printf("---------------------------------------------------------");
		printf("\nApakah anda ingin membeli minuman lagi (y/n)? ");
		scanf(" %c", &j);
		if( j == 'y' || j == 'Y'){
			goto sini;
		}else{
end:
			printf("\nTerimakasih, ");
			if (saldo == 0 || saldo <= 0) {
            printf("Silahkan Ambil minuman dan uang anda!\n");
        	} else {
            printf("kembalian Anda Rp%d jika dalam uang fisik berupa :\n", saldo);
            while (saldo != 0) {
                if (saldo >= 10000) {
                    pecahan = saldo / 10000;
                    saldo = saldo % 10000;
                    printf("%d pecahan R10.000-an\n", pecahan);
                } else if (saldo >= 5000) {
                    pecahan = saldo / 5000;
                    saldo = saldo % 5000;
                    printf("%d pecahan Rp5000-an\n", pecahan);
                }else if (saldo >= 2000) {
                    pecahan = saldo / 2000;
                    saldo = saldo % 2000;
                    printf("%d pecahan Rp2000-an\n", pecahan);
                } else if (saldo >= 1000) {
                    pecahan = saldo / 1000;
                    saldo = saldo % 1000;
                    printf("%d pecahan Rp1000-an\n", pecahan);
                } else if (saldo >= 500) {
                    pecahan = saldo / 500;
                    saldo = saldo % 500;
                    printf("%d pecahan Rp500-an\n", pecahan);
                } else {
                    saldo = 0;
                }
            }
        }
		}
	}else{
		printf("\nTerimakasih");
	}
	return 0;
}
