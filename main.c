#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Tarih ve saat bilgilerini tutacak struct yapısı.
struct DateTime {
	struct {
	 int year;
     int month;
	 int day;
	
	} date;
    struct {
      int hour;
	  int minute;
	  int second;	
	} time;
};

// DateTime struct'ını epoch'a çeviren fonksiyon
//Epoch zamanı (Unix zamanı olarak da bilinir), 1 Ocak 1970 00:00:00 UTC'den itibaren geçen saniye sayısını temsil eden bir zaman ölçüm sistemidir.
//Bu sistem, bilgisayar sistemlerinde tarih ve saat işlemlerini kolaylaştırır.
time_t convertToEpoch(struct DateTime dt) {
    struct tm timeinfo = {0};
    timeinfo.tm_year = dt.date.year - 1900; // tm_year 1900'den başlar
    timeinfo.tm_mon = dt.date.month - 1;    // tm_mon 0'dan başlar
    timeinfo.tm_mday = dt.date.day;
    timeinfo.tm_hour = dt.time.hour;
    timeinfo.tm_min = dt.time.minute;
    timeinfo.tm_sec = dt.time.second;

  return mktime(&timeinfo);
}

int main() {
    struct DateTime dt1,dt2;
	time_t epoch1,epoch2;
	double difference;
	
//Kullanıcıdan birinci ve ikinci tarihler alınır.	
	printf("Birinci tarih:\n");
	printf("Yil(1970-...):");
	scanf("%d",&dt1.date.year);
	printf("Ay(1-12):");
	scanf("%d",&dt1.date.month);
	printf("Gun(1-31):");
	scanf("%d",&dt1.date.day);
	printf("Saat(0-23):");
	scanf("%d",&dt1.time.hour);
	printf("Dakika(0-59):");
	scanf("%d",&dt1.time.minute);
	printf("Saniye(0-59):");
	scanf("%d",&dt1.time.second);
	
	printf("Ikinci tarih:\n");
	printf("Yil(1970-...):");
	scanf("%d",&dt2.date.year);
	printf("Ay(1-12):");
	scanf("%d",&dt2.date.month);
	printf("Gun(1-31):");
	scanf("%d",&dt2.date.day);
	printf("Saat(0-23):");
	scanf("%d",&dt2.time.hour);
	printf("Dakika(0-59):");
	scanf("%d",&dt2.time.minute);
	printf("Saniye(0-59):");
	scanf("%d",&dt2.time.second);

//Girilen tarihler epoch'a çevrilir.	
	epoch1 = convertToEpoch(dt1);
	epoch2 = convertToEpoch(dt2);
	
//Epoch değerleri ekrana yazılır.
    printf("Birinci tarihin epoch\'u: %ld\n",(long)epoch1);
    printf("Ikinci tarihin epoch\'u: %ld\n",(long)epoch2);
    
//Tarihler arasındaki farkı hesaplama ve ekrana gösterme.
    difference = difftime(epoch2, epoch1);
    printf("\nIki tarih arasindaki fark:\n");
    printf("%.0f saniye\n", difference);
    printf("%.0f dakika\n", difference / 60);
    printf("%.0f saat\n", difference / 3600);
    printf("%.0f gun\n", difference / (3600 * 24));
	
		
	
	return 0;
}
