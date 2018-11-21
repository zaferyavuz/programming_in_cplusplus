/*
	* operatörü = içerik erişimi için
	& operatörü = adres operatörü
	
		int *p;			// bellek organizasyonunu gösterelim
		int sayi;
		sayi = 78;
		p = &num;
		*p = 24;		// 78 değerinin üzerine 24 yazılır
	
	benzer durum class, struct için de geçerlidir.
	. operatörü, class elamanlarına erişim için
	-> operatörü class pointer elemanlarına erişim için kullanılır
	
	struct studentType
	{
		char name[26];
		double gpa;
		int ssn;
		char grade;
	};

	studentType    student;
	studentType*   studentPtr;
	studentPtr = &student;
	
	student.gpa = 3.9;  
	(*studentPtr).gpa = 3.9;	// bu iki satır aynı işlevi görür
	
INITIALIZING POINTER VARIABLES
	p = NULL;
	p = 0;

DYNAMIC VARIABLES
	new
	delete

	new dataType;   	     	//to allocate a single variable
	new dataType[intExp]; 		//to allocate an array of variables
	
	new int;
	new double[20];
	new Box();
	new Box
	

*/
