#include <iostream>
using namespace std;
/*

Yazıcıya gönderilen belgelerin özellikleri şu şekilde olmalıdır
Belge adı/yolu
boyutu
sayfa sayısı
belgenin sahibi (kisi türünde bir yapı)
  ad
  soyad
  kullanıcı adı
  eposta
  doğum yılı
oluşturulma tarihi (tarih türünden bir yapı)
  yıl
  gün
  ay
  saat
  dakika
  saniye

*/

int main() {
  /*
    dairesel kuyruk tanımlayın.
    ...
  */
  return 0;
}

/*
Örnek Dosya İçeriği
--------------------------------
files/a.docx 2403345 4 zafer yavuz zyavuz zyavuz@ktu.edu.tr 1985 2018 10 21 14 05 56
....
....
....
bu şekilde belge sayısı kadar satir olacak.

sozgelimi dosyada 10 adet belge olsun
kuyruk kapasitesi 5 olsun.
pc kuyruga 2 saniyede bir gondersin.
yazici ise belgeyi 5sn de bir yazsin. 
(BURADA YAZICI YAZMA KAPASİTESİ SABİT ALINMIŞ, 
OYSA Kİ ÖDEVDE YAZICININ SAYFA BASMA HIZI ALINACAK, BELGENİN SAYFA SAYISI ALINACAK, 
YAZICININ BELGEYİ YAZMA HIZI BUNA GÖRE HESAPLANACAK, YANI BU EĞER DİNAMİK OLACAK, 
ÖRNEĞİN;
YAZICI 2 SANİYEDE 1 SAYFA YAZDIRSA 4 SAYFALIK BİR BELGEYİ 8 SN DE YAZDDIRACAK)

bu durumda ornek dosya girisi
a1 
a2
a3
a4
...
...
...
a10

olsun

hededlenen ekran çıktısı 
2.sn pc a1 gonderdi. kuyruk. a1
4.sn pc a2 gönderdi. kuyruk. a1 a2
5.sn yazıcı a1 yazdirdi. kuyruk a2
6.sn pc a3 gonderdi. kuyruk a2 a3
8.sn pc a4 gonderdi. kuyruk. a2 a3 a4
10.sn pc a5 gonderdi. kuyruk. a2 a3 a4 a5
10.sn yazici a2 yazdirdi. kuyruk. a3 a4 a5
.....
16.sn pc a8 gonderdi. kuyruk. a4 a5 a6 a7 a8
18.sn pc a9 gonderdi. hata. kuyruk dolu bekle
20.sn pc a9 gonderdi. hata. kuyruk dolu bekle 
20.sn yazici a4 yazdirdi. kuyruk. a5 a6 a7 a8
22.sn pc a9 gonderdi. kuyruk. a5 a6 a7 a8 a9
.....
50.sn yazici a10 yazdirdi. kuyruk. boş 
pc gonderim listesi bos. kuyruk bos. sonlandı. 
*/
