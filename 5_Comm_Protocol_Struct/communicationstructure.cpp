#include "communicationstructure.h"

Communicationstructure::Communicationstructure()
{

}
//THE X86 ARCHİTECTURE IS ALREADY LITTLE ENDİAN SON NO NEED TO CONVERT IT TO BIGENDIAN FOR EMBEDDED SYSTEMS
//LITLLE ENDIAN 0X01,0X02,0X03,0X04 = "04030201" little endian -> MSB.....LSB
//BIG ENDIAN 0x01,0x02,0x03,0x04 = "01020304" big endian -> LSB......MSB

void Communicationstructure::AssignStructstostructs(){


    //-----------------------------FIRST METHODE-----------------------------
    Struct structfirst; //size should be 10 but it shows 16, use atribute pack
    Struct1 *structsecond;

    structfirst.data1 = 7;
    structfirst.data2=20;
    structfirst.data3 = 35;
    structfirst.data4 = 'c';

    cout<<"Structsecond size:"<<sizeof(structfirst)<<" bytes"<<endl;
    cout<<"Structsecond size:"<<sizeof(*structsecond)<<" bytes"<<endl;

    //IMPORTANT COPY STRUCTURE 1 DATA TO STRUCTURE 2
    structsecond = (Struct1*) &structfirst;

    cout<<"structure second data1 : "<<int(structsecond->data1)<<endl;
    cout<<"structure second data2 : "<<int(structsecond->data2)<<endl;
    cout<<"structure second data3 : "<<int(structsecond->data3)<<endl;
    cout<<"structure second data4 : "<<structsecond->data4<<endl<<endl;
    //-----------------------------------------------------------------------

    //---------------------------ANOTHER METHODE-------------------------
    anothermethodstruct.data1 = 7;
    anothermethodstruct.data2=20;
    anothermethodstruct.data3 = 35;
    anothermethodstruct.data4 = 'c';

    cout<<"Another struct first size:"<<sizeof(anothermethodstruct)<<" bytes"<<endl;
    cout<<"Another struct second size:"<<sizeof(*anothermethodstruct1)<<" bytes"<<endl;

    //COPY STRUCTURE
    anothermethodstruct1 = (Anothermethodstruct1*) &anothermethodstruct;

    cout<<"another structure second data1 : "<<int(anothermethodstruct1->data1)<<endl;
    cout<<"another structure second data2 : "<<int(anothermethodstruct1->data2)<<endl;
    cout<<"another structure second data3 : "<<int(anothermethodstruct1->data3)<<endl;
    cout<<"another structure second data4 : "<<anothermethodstruct1->data4<<endl<<endl;

    //--------------------------------------------------------------------------
}
void Communicationstructure::QbytearraytoStruct(QByteArray &bytearray)//Byte array is hexadecimal value
{
    Qarraystruct *structarray;
    //QByteArray bytearray = QByteArray::fromHex("123456");
   //

    //------QBytearray to struct infrastructure---------
    structarray = (Qarraystruct*) bytearray.data();
    //structarray = reinterpret_cast<Qarraystruct*>(bytearray.data());
    //-----------------------------------------------
    //qToBigEndian(bytearray.at(0));
    qDebug()<<"Qbyte array size: "<<bytearray.size();
    qDebug()<<"Qbyte array inside: "<<bytearray;



    qDebug()<<"QBytearray alone : "<<(int)bytearray.at(2);
    qDebug()<<"Qbyte array to struct data1 : "<<(int)structarray->second;//İt gives correct little endian result
    qDebug()<<endl;
    //cout<<bytearray.at(1)<<endl;
}

void Communicationstructure::Qbytearrayforeachexample(QByteArray &bytearray){
    QByteArray bytearray2;
    int i=0;
    if (!bytearray.isEmpty()){

        foreach(const char byte, bytearray){
            bytearray2.append(byte);
            qDebug().nospace()<<"Byte : 0x0"<<hex<<(uint8_t)bytearray2.data()[i];
            //qDebug("My hex number is: %x", bytearray2.data()[i]);
            //qDebug()<<"Initial Byte array is empty";
            i++;
        }
    }

    else{
        qDebug()<<"Initial Byte array is empty";
    }
}

void Communicationstructure::Textsreamexample(){
//    QString exstring = "string example";
//    QTextStream in(stdin);
//    //in<<exstring;
//    qDebug()<<"Text stream: "<<exstring;
    Writedata();
    Readdata();

}

void Communicationstructure::QbytearraytoUnion(QByteArray &bytearray){

    //QByteArray bytearray = QByteArray::fromHex("123456");
    // Qarrayunion *arraystruct;
    //------QBytearray to struct infrastructure---------
    qarrayunion = (Qarrayunion*) bytearray.data();
    //structarray = reinterpret_cast<Qarraystruct*>(bytearray.data());
    //-----------------------------------------------
    //qToBigEndian(bytearray.at(0));
    qDebug()<<endl;
    qDebug()<<"Qbyte array union size: "<<sizeof (qarrayunion);
    qDebug()<<"Qbyte array union inside: "<<bytearray;



    qDebug()<<"QBytearray union alone : "<<(int)bytearray.at(2);
    qDebug()<<"Qbyte array to union structdata : "<<(int)qarrayunion->alonevalue;
    qDebug()<<"Qbyte array to union data : "<<(int)qarrayunion->unionarraystruct.third;//İt gives correct little endian result
    //cout<<bytearray.at(1)<<endl;

}

void Communicationstructure::Writedata(){
    QFile file("D:/Projeler/Tutorials/Qt-Tutorials/Important-Examples/5_Comm_Protocol_Struct/Fileexample.txt");
    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){

        QTextStream stream(&file);

        stream<<"Hello\r\n";
        stream<<"World\r\n";
        stream<<"mytext\r\n";

        stream.flush();
        //file.flush();
        file.close();
        qDebug()<<endl;
        qDebug()<<"File is written";
    }
}

void Communicationstructure::Readdata(){
    QFile file("D:/Projeler/Tutorials/Qt-Tutorials/Important-Examples/5_Comm_Protocol_Struct/Fileexample.txt");

    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){

        QTextStream stream(&file);

        QString line;

        do{
            line= stream.readLine();
            qDebug()<<line;

        }while(!line.isNull());

//        stream.flush();
//        //file.flush();
        file.close();

        qDebug()<<"File is written";
    }

}



