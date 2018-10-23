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
----------------------------------------------------------------------
ÖRNEK BİR DOSYA 
files/odev_son.docx	44087	4	zafer	yavuz	zyavuz	zyavuz@ceng.ktu.edu.tr	2014	1	30	1	48	34
files/odev1.docx	46543	2	sedat	görmüş	sgormus	sedatgormus@ceng.ktu.edu.tr	2013	10	12	2	7	10
files/rapor.docx	121302	5	ali	demir	ademir	ademir2@hotmail.com	2016	4	15	15	8	6
files/son_rapor.docx	73762	4	esra	demirel	edemir	edemir@zoho.com	2017	11	13	19	15	8
files/belge.docx	123394	1	ferdi	besli	fbesli	ferdi@hotmail.com	2013	5	7	9	9	23
files/gecmis.docx	73468	2	zafer	yavuz	zyavuz	zyavuz@ceng.ktu.edu.tr	2016	11	21	23	3	7
files/cizelge.pdf	98889	1	ali	demir	ademir	ademir2@hotmail.com	2015	10	22	11	25	42
files/haftalık-program.pdf	81120	1	esra	demirel	edemir	edemir@zoho.com	2018	10	3	23	43	54
files/sınav-listesi.pdf	25954	2	zeynep	öztürk	zozturk	zeynep@outlook.com	2015	11	1	7	17	23
files/odev1.cpp	76016	6	sedat	görmüş	sgormus	sedatgormus@ceng.ktu.edu.tr	2016	11	19	13	59	17
files/main.cpp	52982	5	sedat	görmüş	sgormus	sedatgormus@ceng.ktu.edu.tr	2015	8	12	12	20	22
files/kaynak-kod.c	59369	2	sedat	görmüş	sgormus	sedatgormus@ceng.ktu.edu.tr	2017	3	6	5	41	8
files/izinler.pdf	54018	2	zafer	yavuz	zyavuz	zyavuz@ceng.ktu.edu.tr	2017	7	2	2	42	19
files/personel-list.docx	8803	2	ferdi	besli	fbesli	ferdi@hotmail.com	2018	11	13	4	33	24
files/tasarım-raporu.rtf	108384	3	zeynep	öztürk	zozturk	zeynep@outlook.com	2015	9	24	20	29	55
files/bitirme-tez.odf	70000	1	esra	demirel	edemir	edemir@zoho.com	2018	11	26	22	8	53
------------------------------------------------------------------------------------------------
KULLANICIDAN ALINACAK DEĞERLER
1. PC kaç saniyede kuyrupa belge gönderir (sn) : 2
2. Yazıcının bir sayfayı yazma hızı nedir? (cn): 1


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


