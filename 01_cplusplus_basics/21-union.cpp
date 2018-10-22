/*
The union is only as big as necessary to hold its largest data member. 
The other data members are allocated in the same bytes as part of that largest member. 
The details of that allocation are implementation-defined, 
and it's undefined behavior to read from the member of the union that wasn't most recently written. 
Many compilers implement, as a non-standard language extension, the ability to read inactive members of a union.
*/

#include <iostream>
#include <cstdint>
union S
{
    std::int32_t n;     // occupies 4 bytes
    std::uint16_t s[2]; // occupies 4 bytes
    std::uint8_t c;     // occupies 1 byte
};                      // the whole union occupies 4 bytes
 
int main()
{
    S s = {0x12345678}; // initializes the first member, s.n is now the active member
    // at this point, reading from s.s or s.c is undefined behavior
    std::cout << std::hex << "s.n = " << s.n << '\n';
    s.s[0] = 0x0011; // s.s is now the active member
    // at this point, reading from n or c is UB but most compilers define it
    std::cout << "s.c is now " << +s.c << '\n' // 11 or 00, depending on platform
              << "s.n is now " << s.n << '\n'; // 12340011 or 00115678
}

/*
Possible output:

s.n = 12345678
s.c is now 0
s.n is now 115678
*/
====================================================================
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
