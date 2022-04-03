#include <QCoreApplication>
#include "communicationstructure.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Communicationstructure comm;
    QByteArray bytearraystruct = QByteArray("\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0A");
    QByteArray bytearrayunion = QByteArray("\x01\x02\x03\x04");
    comm.AssignStructstostructs();
    comm.QbytearraytoStruct(bytearraystruct);
    comm.Qbytearrayforeachexample(bytearraystruct);
    comm.QbytearraytoUnion(bytearrayunion);
    comm.Textsreamexample();

    return a.exec();
}
