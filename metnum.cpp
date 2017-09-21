#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<math.h>


int tambah(int p, int q);
int kurang(int p, int q);
int kali(int p, int q);
int pangkat(int p, int q);
void Fungsi(int p, int q);
void menu();

int main(){
	
	int i,p,q,pilih,hasil,z;
	char opsi;	
	Home:
	menu();
	printf("\nPilih Menu : "); scanf("%d", &pilih);
	switch(pilih){

	case 1:
		printf("\n");
		printf("\nBilangan 1 : "); scanf("%d", &p);
		printf("Bilangan 2 : "); scanf("%d", &q);
		hasil = tambah(p,q);
		printf("\nHasil : %d",hasil);
		getch();
		system("cls");
		goto Home;
		break;

    case 2:
		printf("\n");
		printf("\nBilangan 1 : "); scanf("%d", &p);
		printf("Bilangan 2 : "); scanf("%d", &q);
		hasil = kurang(p,q);
		printf("\nHasil : %d",hasil);
		getch();
		system("cls");
		goto Home;
		break;
		
    case 3:
		printf("\n");
		printf("\nBilangan 1 : "); scanf("%d", &p);
		printf("Bilangan 2 : "); scanf("%d", &q);
		hasil = kali(p,q);
		printf("\nHasil : %d",hasil);
		getch();
		system("cls");
		goto Home;
		break;

    case 4:
		printf("\n");
		printf("\nBilangan : "); scanf("%d", &p);
		printf("Bilangan perpangkatan : "); scanf("%d", &q);
		hasil = pangkat(p,q);
		printf("Hasil : %d",hasil);
		getch();
		system("cls");
		goto Home;
		break;

    case 5:
		printf("\n");
		printf("\nBilangan 1 : "); scanf("%d", &p);
		printf("Bilangan 2 : "); scanf("%d", &q);
		for(i=p;i<=q;i++){
      		hasil = (2*(i*i))-((4*i)+1);
      		printf("hasil : %d",hasil);
      		printf("\n");
    	}
		getch();
		system("cls");
		goto Home;
		break;
    }
}

void menu(){
	int pilih;
	printf("\n 1. Tambah");
	printf("\n 2. Kurang");
	printf("\n 3. Kali");
	printf("\n 4. Pangkat");
	printf("\n 5. Fungsi");
}

int tambah(int p, int q){
	int hasil;
	hasil = p + q;
	return(hasil);
}

int kurang(int p, int q){
	int hasil;
	hasil = p - q;
	return(hasil);
}

int kali(int p, int q){
	int hasil;
	hasil = p * q;
	return(hasil);
}

int pangkat(int p, int q){
	int i,hasil;
	hasil=1;
	for(i=1;i<=q;i++){
		hasil=hasil*p;
	}
	return hasil;
}

void Fungsi(int p, int q){
	int i, hasil;
	for(i = p; i <= q; i++) {
		hasil = (2*(i*i)) - ((4*i) + 1);
	}

}
