
#include <fstream>
#include <iostream>
using namespace std;
/*
1	
ofstream

This data type represents the output file stream and is used to create files and to write information to files.

2	
ifstream

This data type represents the input file stream and is used to read information from files.

3	
fstream

This data type represents the file stream generally, and has the capabilities of both ofstream and ifstream which means it can create files, write information to files, and read information from files.


1	
ios::app

Append mode. All output to that file to be appended to the end.

2	
ios::ate

Open a file for output and move the read/write control to the end of the file.

3	
ios::in

Open a file for reading.

4	
ios::out

Open a file for writing.

5	
ios::trunc

If the file already exists, its contents will be truncated before opening the file.

*/


int main () {
   char data[100];

   // open a file in write mode.
   ofstream outfile;
   outfile.open("afile.dat");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);

   // write inputted data into the file.
   outfile << data << endl;

   cout << "Enter your age: "; 
   cin >> data;
   cin.ignore();
   
   // again write inputted data into the file.
   outfile << data << endl;

   // close the opened file.
   outfile.close();

   // open a file in read mode.
   ifstream infile; 
   infile.open("afile.dat"); 
 
   cout << "Reading from the file" << endl; 
   infile >> data; 

   // write the data at the screen.
   cout << data << endl;
   
   // again read the data from the file and display it.
   infile >> data; 
   cout << data << endl; 

   // close the opened file.
   infile.close();

   return 0;
}
