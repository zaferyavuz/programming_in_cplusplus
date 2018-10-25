/*
The union is only as big as necessary to hold its largest data member. 
The other data members are allocated in the same bytes as part of that largest member. 
The details of that allocation are implementation-defined, 
and it's undefined behavior to read from the member of the union that wasn't most recently written. 
Many compilers implement, as a non-standard language extension, the ability to read inactive members of a union.
*/

#include <iostream>
#include <cstdint>
#include <cstring>

using namespace std;
union Ogrenci{
  char ad[30];          // 30 byte
  double araSinavNot;   // 8 byte
  double finalNot;      // 8 byte
  double ortalamaNot;   // 8 byte
  char harfNot[3];      // 3 byte
};                       // Ogrenci union 30 byte
                    
 
int main()
{
    Ogrenci o;
    strcpy(o.ad,"Ferdi");
    o.araSinavNot = 123.0;
    cout<<showpoint<<o.araSinavNot<<endl;
    return 0;
}


    /*
The purpose of union is to save memory by using the same memory region for 
    storing different objects at different times. That's it.
It is like a room in a hotel. Different people live in it for non-overlapping periods of time. 
    These people never meet, and generally don't know anything about each other. 
    By properly managing the time-sharing of the rooms 
    (i.e. by making sure different people don't get assigned to one room at the same time), 
     a relatively small hotel can provide accomodations to a relatively large number of people, 
     which is what hotels are for.
That's exactly what union does. If you know that several objects in your program hold values 
with non-overlapping value-lifetimes, then you can "merge" these objects into a union and thus save memory. 
Just like a hotel room has at most one "active" tenant at each moment of time, 
a union has at most one "active" member at each moment of program time. 
Only the "active" member can be read. 
By writing into other member you switch the "active" status to that other member.
*/
//===========================================================================
/*
*/
