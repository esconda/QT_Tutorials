#include <QCoreApplication>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //ENTER DATABASE NAME AND POS
    QString servername = "D:/Projeler/Tutorials/Qt-Tutorials/Important-Examples/";
    QString dbname = "example-database.db";

    //ADD DATABASE TYPE
    const QString DRIVER("QSQLITE");
    QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);
    db.setConnectOptions();

    //GET DATABASE
    QString dsn = servername+dbname;
    db.setDatabaseName(dsn);


    if(!db.open()){
        qWarning()<<"ERROR:"<<dsn;
    }

    else{
        qDebug()<<"Opened"<<dsn;
        QSqlQuery qry;
        int i =0;
        if(qry.exec("SELECT * FROM table1")){
            while(qry.next()){

                QString dbval = qry.value(i).toString();
                qDebug()<<"Values"<<dbval;
                i++;

            }
        }
        else{

            qDebug()<<"Error"<<db.lastError();
        }

        //INSERTING VALUE TO DATABASE
        qry.prepare("INSERT INTO table1 (name,Surname)"
                    "VALUES (:name, :Surname)");

        qry.bindValue(":name","Ahmet");
        qry.bindValue(":Surname","Arslan");
        qry.exec();


        qDebug()<<"Closing";
        db.close();
    }


    return a.exec();
}
