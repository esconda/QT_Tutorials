#include "firstclass.h"

Firstclass::Firstclass(QWidget *parent) : QWidget {parent} //Qwidget altyapısı kullanılcaksa qobject yerine q widget kullanılır
{

}

void Firstclass::print(QString printstring){

    cout<<printstring.toStdString()<<endl;
}

void Firstclass::fileread(){
    QList<QStringList> data;
    QFile file;
    QFileDialog dialog;
    imgfilename = dialog.getOpenFileName(this,
                                   tr("Open Image File"), "",
                                   tr("All Files (*);;Stream Type (*.xml);;Stream Type (*.csv);;Stream Type (*.txt)"));
    file.setFileName(imgfilename);

    if(file.open(QIODevice::ReadOnly)){

        QTextStream stream(&file);
        forever{
            QString line = stream.readLine();
            if(line.isNull()){
                break;
            }

            if(line.isEmpty()){
                continue;
            }
            QStringList row;
            int i=0;
            foreach(const QString& cell, line.split(",")){

                row.append(cell.trimmed());
                cout<<row.at(i).toStdString()<<endl;
                i++;
            }

            data.append(row);
        }
    }

}
