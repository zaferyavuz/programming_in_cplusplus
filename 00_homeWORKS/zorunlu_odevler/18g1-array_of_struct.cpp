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
-----------------------------------------------------------------------------------
Dosya_ad | Boyut | Sayfa_Sayısı | Ad | Soyad | Kullanıcı_ad | email | doğum_yılı | yıl | ay | gün | saat | dakika | saniye
-----------------------------------------------------------------------------------
files/odev_son.docx	14166	4	zafer	yavuz	zyavuz	zyavuz@ceng.ktu.edu.tr	1981	2014	11	29	20	11	48
files/odev1.docx	48262	2	sedat	görmüş	sgormus	sedatgormus@ceng.ktu.edu.tr	1980	2016	12	23	10	27	36
files/rapor.docx	52038	5	ali	demir	ademir	ademir2@hotmail.com	1977	2013	9	5	12	40	43
files/son_rapor.docx	53889	4	esra	demirel	edemir	edemir@zoho.com	1985	2013	2	21	2	24	59
files/belge.docx	117786	1	ferdi	besli	fbesli	ferdi@hotmail.com	1977	2017	4	13	18	47	52
files/gecmis.docx	84050	2	zafer	yavuz	zyavuz	zyavuz@ceng.ktu.edu.tr	1979	2013	1	15	21	20	13
files/cizelge.pdf	97905	1	ali	demir	ademir	ademir2@hotmail.com	1982	2016	7	4	5	24	8
files/haftalık-program.pdf	62456	1	esra	demirel	edemir	edemir@zoho.com	1983	2017	3	5	17	57	30
files/sınav-listesi.pdf	71808	2	zeynep	öztürk	zozturk	zeynep@outlook.com	1990	2015	1	3	7	6	19
files/odev1.cpp	117442	6	sedat	görmüş	sgormus	sedatgormus@ceng.ktu.edu.tr	1982	2014	9	17	18	30	18
------------------------------------------------------------------------------------------------
KULLANICIDAN ALINACAK DEĞERLER
1. PC kaç saniyede kuyrupa belge gönderir (sn) : ?
2. Yazıcının bir sayfayı yazma hızı nedir? (cn): ?
------------------------------------------------------------------------------------------------
ÖRNEK EKRAN ÇIKTISI (YUKARIDAKİ ÖRNEK DOSYA İÇİN)
------------------------------------------------------------------------------------------------
PC nin belge yazma sıklığı:  2
Yazıcı 1 sayfa yazma süresi:  1
0sn - PC kuyruğa yazdı - 	files/odev_son.docx
0sn - Yazıcı kuyruktan okudu - 	files/odev_son.docx
2sn - PC kuyruğa yazdı - 	files/odev1.docx
4sn - PC kuyruğa yazdı - 	files/rapor.docx
4sn - Yazıcı belgeyi yazdı. 	files/odev_son.docx
4sn - Yazıcı kuyruktan okudu - 	files/odev1.docx
6sn - PC kuyruğa yazdı - 	files/son_rapor.docx
6sn - Yazıcı belgeyi yazdı. 	files/odev1.docx
6sn - Yazıcı kuyruktan okudu - 	files/rapor.docx
8sn - PC kuyruğa yazdı - 	files/belge.docx
10sn - PC kuyruğa yazdı - 	files/gecmis.docx
11sn - Yazıcı belgeyi yazdı. 	files/rapor.docx
11sn - Yazıcı kuyruktan okudu - 	files/son_rapor.docx
12sn - PC kuyruğa yazdı - 	files/cizelge.pdf
14sn - PC kuyruğa yazdı - 	files/haftalık-program.pdf
15sn - Yazıcı belgeyi yazdı. 	files/son_rapor.docx
15sn - Yazıcı kuyruktan okudu - 	files/belge.docx
16sn - PC kuyruğa yazdı - 	files/sınav-listesi.pdf
16sn - Yazıcı belgeyi yazdı. 	files/belge.docx
16sn - Yazıcı kuyruktan okudu - 	files/gecmis.docx
18sn - PC kuyruğa yazdı - 	files/odev1.cpp
18sn - Yazıcı belgeyi yazdı. 	files/gecmis.docx
18sn - Yazıcı kuyruktan okudu - 	files/cizelge.pdf
19sn - Yazıcı belgeyi yazdı. 	files/cizelge.pdf
19sn - Yazıcı kuyruktan okudu - 	files/haftalık-program.pdf
20sn - Yazıcı belgeyi yazdı. 	files/haftalık-program.pdf
20sn - Yazıcı kuyruktan okudu - 	files/sınav-listesi.pdf
22sn - Yazıcı belgeyi yazdı. 	files/sınav-listesi.pdf
22sn - Yazıcı kuyruktan okudu - 	files/odev1.cpp
28sn - Yazıcı belgeyi yazdı.	files/odev1.cpp
Tüm Belgeler Yazdırıldı...
------------------------------------------

*/
