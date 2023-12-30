#include<stdio.h>
#include<conio.h>
main()
{ struct karyawan { char nama[20];
					char alamat[200];
					char bagian[20];
					int gaji;
					} dataKaryawan[5];
int i,a;
a=1;
printf("INPUT DATA KARYAWAN");
for(i=0;i<5;i++)
{ printf("\nData ke-%i\n", a);
printf("Nama\t= "); scanf("%[^\n]s",&dataKaryawan[i].nama);
fflush(stdin);
printf("Alamat\t= "); scanf("%[^\n]s",&dataKaryawan[i].alamat);
fflush(stdin);
printf("bagian\t= "); scanf("%[^\n]s",&dataKaryawan[i].bagian);
fflush(stdin);
printf("gaji\t= "); scanf("%i",&dataKaryawan[i].gaji);
a++;
fflush(stdin);
} //end loop i

//menampilkan kembali data karyawan
printf("\nNama	    Alamat	 Bagian	   Gaji\n");
printf("______________________________________________________\n");
for(i=0;i<5;i++)
{
	printf("%s%15s%10s%10i\n",dataKaryawan[i].nama,dataKaryawan[i].alamat,dataKaryawan[i].bagian,dataKaryawan[i].gaji);
} //end Loop i
printf("\n\nTekan Enter...");
getche();
}
