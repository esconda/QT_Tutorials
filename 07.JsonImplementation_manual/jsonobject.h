#ifndef JSONOBJECT_H
#define JSONOBJECT_H
#include <QVariant>
#include <iostream>

using namespace std;
typedef QVariantList JsonArray;

class JsonObject
{
public:
 static const QString null;
 static const QString True;
 static const QString False;

JsonObject(QString jsonData = "");

QString toString() const;

void put(const QString& id,JsonObject obj);
 void put(const QString& id,QString value);
 void put(const QString& id,int value);
 void put(const QString& id,double value);
 void put(const QString& id,qlonglong value);
 void put(const QString& id,JsonArray value);

JsonObject getObject(const QString& id, bool *ok = NULL) const;
 QString getString(const QString& id, bool *ok = NULL) const;
 int getInt(const QString& id, bool *ok = NULL) const;
 double getDouble(const QString& id, bool *ok = NULL) const;
 qlonglong getLong(const QString& id, bool *ok = NULL) const;
 JsonArray getArray(const QString& id, bool *ok = NULL) const;

bool isNull(const QString& id) const;

QVariantMap getRawData() const;
protected:
 void setRawData(QVariantMap data);

private:
 QString stringFromList(const JsonArray& array) const;
 QString getKey(QString& data);
 QString getValue(QString& data);
 JsonArray parseArray(QString data);

QVariantMap objectData;
};

#endif // JSONOBJECT_H
