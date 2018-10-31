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
KAPASİTE = 5
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


------------------------------------------------------------------------------------------------
ÖRNEK EKRAN ÇIKTISI 2 (YUKARIDAKİ ÖRNEK DOSYA İÇİN) (belgenin sayfa sayısı fikir vermesi açısından eklendi)
KAPASİTE = 5
------------------------------------------------------------------------------------------------
PC nin belge yazma sıklığı:  1
Yazıcı 1 sayfa yazma süresi:  2
0sn - PC kuyruğa yazdı - 	files/odev_son.docx (4)
0sn - Yazıcı kuyruktan okudu - 	files/odev_son.docx (4)
1sn - PC kuyruğa yazdı - 	files/odev1.docx (2)
2sn - PC kuyruğa yazdı - 	files/rapor.docx (5)
3sn - PC kuyruğa yazdı - 	files/son_rapor.docx (4)
4sn - PC kuyruğa yazdı - 	files/belge.docx (1)
5sn - PC kuyruğa yazdı - 	files/gecmis.docx (2)
6sn - PC kuyruğa yazamadı.
7sn - PC kuyruğa yazamadı.
8sn - PC kuyruğa yazamadı.
8sn - Yazıcı belgeyi yazdı. 	files/odev_son.docx (4)
8sn - Yazıcı kuyruktan okudu - 	files/odev1.docx (2)
9sn - PC kuyruğa yazdı - 	files/cizelge.pdf (1)
10sn - PC kuyruğa yazamadı.
11sn - PC kuyruğa yazamadı.
12sn - PC kuyruğa yazamadı.
12sn - Yazıcı belgeyi yazdı. 	files/odev1.docx (2)
12sn - Yazıcı kuyruktan okudu - 	files/rapor.docx (5)
13sn - PC kuyruğa yazdı - 	files/haftalık-program.pdf (1)
14sn - PC kuyruğa yazamadı.
15sn - PC kuyruğa yazamadı.
16sn - PC kuyruğa yazamadı.
17sn - PC kuyruğa yazamadı.
18sn - PC kuyruğa yazamadı.
19sn - PC kuyruğa yazamadı.
20sn - PC kuyruğa yazamadı.
21sn - PC kuyruğa yazamadı.
22sn - PC kuyruğa yazamadı.
22sn - Yazıcı belgeyi yazdı. 	files/rapor.docx (5)
22sn - Yazıcı kuyruktan okudu - 	files/son_rapor.docx (4)
23sn - PC kuyruğa yazdı - 	files/sınav-listesi.pdf (2)
24sn - PC kuyruğa yazamadı.
25sn - PC kuyruğa yazamadı.
26sn - PC kuyruğa yazamadı.
27sn - PC kuyruğa yazamadı.
28sn - PC kuyruğa yazamadı.
29sn - PC kuyruğa yazamadı.
30sn - PC kuyruğa yazamadı.
30sn - Yazıcı belgeyi yazdı. 	files/son_rapor.docx (4)
30sn - Yazıcı kuyruktan okudu - 	files/belge.docx (1)
31sn - PC kuyruğa yazdı - 	files/odev1.cpp (6)
32sn - Yazıcı belgeyi yazdı. 	files/belge.docx (1)
32sn - Yazıcı kuyruktan okudu - 	files/gecmis.docx (2)
36sn - Yazıcı belgeyi yazdı. 	files/gecmis.docx (2)
36sn - Yazıcı kuyruktan okudu - 	files/cizelge.pdf (1)
38sn - Yazıcı belgeyi yazdı. 	files/cizelge.pdf (1)
38sn - Yazıcı kuyruktan okudu - 	files/haftalık-program.pdf (1)
40sn - Yazıcı belgeyi yazdı. 	files/haftalık-program.pdf (1)
40sn - Yazıcı kuyruktan okudu - 	files/sınav-listesi.pdf (2)
44sn - Yazıcı belgeyi yazdı. 	files/sınav-listesi.pdf (2)
44sn - Yazıcı kuyruktan okudu - 	files/odev1.cpp (6)
56sn - Yazıcı belgeyi yazdı.	files/odev1.cpp (6)
Tüm Belgeler Yazdırıldı...
------------------------------------------



------------------------------------------------------------------------------------------------
ÖRNEK EKRAN ÇIKTISI 3 (YUKARIDAKİ ÖRNEK DOSYA İÇİN) (belgenin sayfa sayısı fikir vermesi açısından eklendi)
KAPSİTE = 3
------------------------------------------------------------------------------------------------
PC nin belge yazma sıklığı:  3
Yazıcı 1 sayfa yazma süresi:  2
0sn - PC kuyruğa yazdı - 	files/odev_son.docx (4)
0sn - Yazıcı kuyruktan okudu - 	files/odev_son.docx (4)
3sn - PC kuyruğa yazdı - 	files/odev1.docx (2)
6sn - PC kuyruğa yazdı - 	files/rapor.docx (5)
8sn - Yazıcı belgeyi yazdı. 	files/odev_son.docx (4)
8sn - Yazıcı kuyruktan okudu - 	files/odev1.docx (2)
9sn - PC kuyruğa yazdı - 	files/son_rapor.docx (4)
12sn - PC kuyruğa yazdı - 	files/belge.docx (1)
12sn - Yazıcı belgeyi yazdı. 	files/odev1.docx (2)
12sn - Yazıcı kuyruktan okudu - 	files/rapor.docx (5)
15sn - PC kuyruğa yazdı - 	files/gecmis.docx (2)
18sn - PC kuyruğa yazamadı.
21sn - PC kuyruğa yazamadı.
22sn - Yazıcı belgeyi yazdı. 	files/rapor.docx (5)
22sn - Yazıcı kuyruktan okudu - 	files/son_rapor.docx (4)
24sn - PC kuyruğa yazdı - 	files/cizelge.pdf (1)
27sn - PC kuyruğa yazamadı.
30sn - PC kuyruğa yazamadı.
30sn - Yazıcı belgeyi yazdı. 	files/son_rapor.docx (4)
30sn - Yazıcı kuyruktan okudu - 	files/belge.docx (1)
32sn - Yazıcı belgeyi yazdı. 	files/belge.docx (1)
32sn - Yazıcı kuyruktan okudu - 	files/gecmis.docx (2)
33sn - PC kuyruğa yazdı - 	files/haftalık-program.pdf (1)
36sn - PC kuyruğa yazdı - 	files/sınav-listesi.pdf (2)
36sn - Yazıcı belgeyi yazdı. 	files/gecmis.docx (2)
36sn - Yazıcı kuyruktan okudu - 	files/cizelge.pdf (1)
38sn - Yazıcı belgeyi yazdı. 	files/cizelge.pdf (1)
38sn - Yazıcı kuyruktan okudu - 	files/haftalık-program.pdf (1)
39sn - PC kuyruğa yazdı - 	files/odev1.cpp (6)
40sn - Yazıcı belgeyi yazdı. 	files/haftalık-program.pdf (1)
40sn - Yazıcı kuyruktan okudu - 	files/sınav-listesi.pdf (2)
44sn - Yazıcı belgeyi yazdı. 	files/sınav-listesi.pdf (2)
44sn - Yazıcı kuyruktan okudu - 	files/odev1.cpp (6)
56sn - Yazıcı belgeyi yazdı.	files/odev1.cpp (6)
Tüm Belgeler Yazdırıldı...
------------------------------------------



------------------------------------------------------------------------------------------------
ÖRNEK EKRAN ÇIKTISI 3 (YUKARIDAKİ ÖRNEK DOSYA İÇİN) (belgenin sayfa sayısı fikir vermesi açısından eklendi)
KAPSİTE = 7
------------------------------------------------------------------------------------------------
PC nin belge yazma sıklığı:  1
Yazıcı 1 sayfa yazma süresi:  2
0sn - PC belgeyi kuyruğa yazdı - 	files/odev_son.docx (4 sayfa)
0sn - Yazıcı belgeyi kuyruktan okudu - 	files/odev_son.docx (4)
1sn - PC belgeyi kuyruğa yazdı - 	files/odev1.docx (2 sayfa)
2sn - PC belgeyi kuyruğa yazdı - 	files/rapor.docx (5 sayfa)
3sn - PC belgeyi kuyruğa yazdı - 	files/son_rapor.docx (4 sayfa)
4sn - PC belgeyi kuyruğa yazdı - 	files/belge.docx (1 sayfa)
5sn - PC belgeyi kuyruğa yazdı - 	files/gecmis.docx (2 sayfa)
6sn - PC belgeyi kuyruğa yazdı - 	files/cizelge.pdf (1 sayfa)
7sn - PC belgeyi kuyruğa yazdı - 	files/haftalık-program.pdf (1 sayfa)
8sn - HATA!!! - PC belgeyi kuyruğa yazamadı. (KUYRUK DOLU)
8sn - Yazıcı belgeyi yazma işini bitirdi. 	files/odev_son.docx (4 sayfa)
8sn - Yazıcı belgeyi kuyruktan okudu - 	files/odev1.docx (2)
9sn - PC belgeyi kuyruğa yazdı - 	files/sınav-listesi.pdf (2 sayfa)
10sn - HATA!!! - PC belgeyi kuyruğa yazamadı. (KUYRUK DOLU)
11sn - HATA!!! - PC belgeyi kuyruğa yazamadı. (KUYRUK DOLU)
12sn - HATA!!! - PC belgeyi kuyruğa yazamadı. (KUYRUK DOLU)
12sn - Yazıcı belgeyi yazma işini bitirdi. 	files/odev1.docx (2 sayfa)
12sn - Yazıcı belgeyi kuyruktan okudu - 	files/rapor.docx (5)
13sn - PC belgeyi kuyruğa yazdı - 	files/odev1.cpp (6 sayfa)
22sn - Yazıcı belgeyi yazma işini bitirdi. 	files/rapor.docx (5 sayfa)
22sn - Yazıcı belgeyi kuyruktan okudu - 	files/son_rapor.docx (4)
30sn - Yazıcı belgeyi yazma işini bitirdi. 	files/son_rapor.docx (4 sayfa)
30sn - Yazıcı belgeyi kuyruktan okudu - 	files/belge.docx (1)
32sn - Yazıcı belgeyi yazma işini bitirdi. 	files/belge.docx (1 sayfa)
32sn - Yazıcı belgeyi kuyruktan okudu - 	files/gecmis.docx (2)
36sn - Yazıcı belgeyi yazma işini bitirdi. 	files/gecmis.docx (2 sayfa)
36sn - Yazıcı belgeyi kuyruktan okudu - 	files/cizelge.pdf (1)
38sn - Yazıcı belgeyi yazma işini bitirdi. 	files/cizelge.pdf (1 sayfa)
38sn - Yazıcı belgeyi kuyruktan okudu - 	files/haftalık-program.pdf (1)
40sn - Yazıcı belgeyi yazma işini bitirdi. 	files/haftalık-program.pdf (1 sayfa)
40sn - Yazıcı belgeyi kuyruktan okudu - 	files/sınav-listesi.pdf (2)
44sn - Yazıcı belgeyi yazma işini bitirdi. 	files/sınav-listesi.pdf (2 sayfa)
44sn - Yazıcı belgeyi kuyruktan okudu - 	files/odev1.cpp (6)
56sn - Yazıcı belgeyi yazma işini bitirdi. 	files/odev1.cpp (6 sayfa)
Tüm Belgeler Yazdırıldı...
------------------------------------------
*/
