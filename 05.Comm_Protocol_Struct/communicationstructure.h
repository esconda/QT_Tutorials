#ifndef COMMUNICATIONSTRUCTURE_H
#define COMMUNICATIONSTRUCTURE_H

#include <iostream>
#include <QtCore>
#include <string.h>
//#include <QtGlobal>
//#include <qendian.h>

using namespace std;

class Communicationstructure
{
public:
    Communicationstructure();

#pragma pack(push,1)//it gives exact size of the struct it gives 10
    typedef struct {
       uint8_t data1;
       int data2;
       int data3;
       unsigned char data4;

    }  Struct ; //__attribute__((__packed__)) does not give correct result use pragma

    typedef struct{
        uint8_t data1;
        int data2;
        int data3;
        unsigned char data4;
    }Struct1 ;

    typedef struct{
        unsigned char first;
        int second;
        int third;
        unsigned char forth;
    } Qarraystruct;

    struct Anothermethodstruct{
        uint8_t data1;
        int data2;
        int data3;
        unsigned char data4;

    }anothermethodstruct;

    struct Anothermethodstruct1{
        uint8_t data1;
        int data2;
        int data3;
        unsigned char data4;
    }*anothermethodstruct1;

   union Qarrayunion {
        int alonevalue;
        struct Arraystruct{
            unsigned char first;
            unsigned char second;
            unsigned char third;
            unsigned char forth;
        }unionarraystruct;
    } *qarrayunion;



#pragma pack(pop)


    void AssignStructstostructs();
    void QbytearraytoStruct(QByteArray &bytearray);
    void Qbytearrayforeachexample(QByteArray &bytearray);
    void QbytearraytoUnion(QByteArray &bytearray);
    void Textsreamexample();
    void Writedata();
    void Readdata();
};

#endif // COMMUNICATIONSTRUCTURE_H
