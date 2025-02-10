# Tarih ve Saat Farkı Hesaplayıcı ⏳

Bu proje, iki tarih ve saat bilgisi arasındaki farkı saniye, dakika, saat ve gün cinsinden hesaplayan bir C programıdır. Program, kullanıcıdan iki farklı tarih ve saat bilgisi alarak bunları **Epoch zamanına** (Unix Timestamp) dönüştürür ve aralarındaki farkı hesaplar.

---

## 🚀 Özellikler

✅ Kullanıcıdan iki tarih ve saat bilgisi alma  
✅ Tarih ve saat bilgisini **Epoch zamanına** çevirme  
✅ İki zaman arasındaki farkı saniye, dakika, saat ve gün olarak gösterme  
✅ `mktime()` fonksiyonunu kullanarak tarih dönüşümü yapma  

---

## 📌 Kullanım

1. Kullanıcıdan aşağıdaki formatta giriş yapması istenir:
   ```
   Birinci tarih:
   Yil(1970-...): 2024
   Ay(1-12): 2
   Gun(1-31): 10
   Saat(0-23): 14
   Dakika(0-59): 30
   Saniye(0-59): 00
   
   Ikinci tarih:
   Yil(1970-...): 2025
   Ay(1-12): 3
   Gun(1-31): 15
   Saat(0-23): 18
   Dakika(0-59): 45
   Saniye(0-59): 30
   ```

2. Çıktı şu şekilde olacaktır:
   ```
   Birinci tarihin epoch'u: 1707575400
   Ikinci tarihin epoch'u: 1742323530
   
   Iki tarih arasindaki fark:
   34567890 saniye
   576131 dakika
   9602 saat
   400 gün
   ```

#📜 Lisans

Bu proje **MIT Lisansı** ile lisanslanmıştır. Daha fazla bilgi için `LICENSE` dosyasına göz atabilirsiniz.

