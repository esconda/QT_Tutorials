#include "jsonobject.h"
#include <QStringList>

QString JsonObject::toString() const
{
 QString result = "{";
 QStringList keys = objectData.keys();
 for(int i = 0; i < keys.count(); ++i)
 {
 QVariant data = objectData.value(keys.at(i));
 switch(data.type())
 {
 case QVariant::Map:
 {
 result.append('"');
 result.append(keys.at(i));
 result.append('"');
 result.append(':');
 JsonObject obj;
 obj.setRawData(data.toMap());
 result.append(obj.toString());
 result.append(',');
 }
 break;
 case QVariant::String:
 {
 result.append('"');
 result.append(keys.at(i));
 result.append('"');
 result.append(':');
 if(data.toString()==null || data.toString()==True || data.toString() == False)
 result.append(data.toString());
 else
 {
 result.append('"');
 result.append(data.toString());
 result.append('"');
 }
 result.append(',');
 }
 break;
 case QVariant::Int:
 {
 result.append('"');
 result.append(keys.at(i));
 result.append('"');
 result.append(':');
 result.append(QString("%1").arg(data.toInt()));
 result.append(',');
 }
 break;
 case QVariant::Double:
 {
 result.append('"');
 result.append(keys.at(i));
 result.append('"');
 result.append(':');
 result.append(QString("%1").arg(data.toDouble()));
 result.append(',');
 }
 break;
 case QVariant::LongLong:
 {
 result.append('"');
 result.append(keys.at(i));
 result.append('"');
 result.append(':');
 result.append(QString("%1").arg(data.toLongLong()));
 result.append(',');
 }
 break;
 case QVariant::List:
 {
 result.append('"');
 result.append(keys.at(i));
 result.append('"');
 result.append(':');
 result.append(stringFromList(data.toList()));
 result.append(',');
 }
 break;
 default:
 break;
 }
 }
 if(result.endsWith(','))
 result.remove(result.length() - 1,1);
 result.append("}");
 return result;
}

void JsonObject::put(const QString& id,JsonObject obj)
{
 objectData.insert(id,QVariant(obj.getRawData()));
}

void JsonObject::put(const QString& id,QString value)
{
 if(value.startsWith('"'))
 value.remove(0,1);
 if(value.endsWith('"'))
 value.remove(value.length() - 1,1);
 objectData.insert(id,QVariant(value));
}

void JsonObject::put(const QString& id,int value)
{
 objectData.insert(id,QVariant(value));
}

void JsonObject::put(const QString& id,double value)
{
 objectData.insert(id,QVariant(value));
}

void JsonObject::put(const QString& id,qlonglong value)
{
 objectData.insert(id,QVariant(value));
}

void JsonObject::put(const QString& id,JsonArray value)
{
 objectData.insert(id,QVariant(value));
}

JsonObject JsonObject::getObject(const QString& id, bool *ok) const
{
 JsonObject result;
 bool isOk = false;
 if(objectData.contains(id))
 {
 QVariant data = objectData.value(id);
 if(data.type() == QVariant::Map)
 {
 result.setRawData(data.toMap());
 isOk = true;
 }
 }
 if(ok != NULL)
 *ok = isOk;
 return result;
}

QString JsonObject::getString(const QString& id, bool *ok) const
{
 QString result = "";
 bool isOk = false;
 if(objectData.contains(id))
 {
 QVariant data = objectData.value(id);
 if(data.type() == QVariant::String)
 {
 result = data.toString();
 isOk = true;
 }
 }
 if(ok != NULL)
 *ok = isOk;
 return result;
}

int JsonObject::getInt(const QString& id, bool *ok) const
{
 int result = 0;
 bool isOk = false;
 if(objectData.contains(id))
 {
 QVariant data = objectData.value(id);
 if(data.type() == QVariant::Int)
 {
 result = data.toInt();
 isOk = true;
 }
 }
 if(ok != NULL)
 *ok = isOk;
 return result;
}

double JsonObject::getDouble(const QString& id, bool *ok) const
{
 double result = 0.0;
 bool isOk = false;
 if(objectData.contains(id))
 {
 QVariant data = objectData.value(id);
 if(data.type() == QVariant::Double)
 {
 result = data.toDouble();
 isOk = true;
 }
 }
 if(ok != NULL)
 *ok = isOk;
 return result;
}

qlonglong JsonObject::getLong(const QString& id, bool *ok) const
{
 qlonglong result = 0;
 bool isOk = false;
 if(objectData.contains(id))
 {
 QVariant data = objectData.value(id);
 if(data.type() == QVariant::LongLong)
 {
 result = data.toLongLong();
 isOk = true;
 }
 }
 if(ok != NULL)
 *ok = isOk;
 return result;
}

JsonArray JsonObject::getArray(const QString& id, bool *ok) const
{
 JsonArray result;
 bool isOk = false;
 if(objectData.contains(id))
 {
 QVariant data = objectData.value(id);
 if(data.type() == QVariant::List)
 {
 result = data.toList();
 isOk = true;
 }
 }
 if(ok != NULL)
 *ok = isOk;
 return result;
}

bool JsonObject::isNull(const QString& id) const
{
 if(objectData.contains(id))
 {
 if(objectData.value(id).type()==QVariant::String)
            return objectData.value(id).toString()==null;
 return false;
 }
 return true;
}

QVariantMap JsonObject::getRawData() const
{
 return objectData;
}

void JsonObject::setRawData(QVariantMap data)
{
 objectData = data;
}

QString JsonObject::stringFromList(const JsonArray& array) const
{
 QString result = "[";
 for(int i = 0; i < array.count();i)
 {
 QVariant data = array.at(i);
 switch(data.type())
 {
 case QVariant::Map:
 {
 JsonObject obj;
 obj.setRawData(data.toMap());
 result.append(obj.toString());
 result.append(',');
 }
 break;
 case QVariant::String:
 {
 if(data.toString()==null || data.toString()==False || data.toString() == True)
 result.append(data.toString());
 else
 {
 result.append('"');
 result.append(data.toString());
 result.append('"');
 }
 result.append(',');
 }
 break;
 case QVariant::Int:
 {
 result.append(QString("%1").arg(data.toInt()));
 result.append(',');
 }
 break;
 case QVariant::Double:
 {
 result.append(QString("%1").arg(data.toDouble()));
 result.append(',');
 }
 break;
 case QVariant::LongLong:
 {
 result.append(QString("%1").arg(data.toLongLong()));
 result.append(',');
 }
 break;
 case QVariant::List:
 {
 result.append(stringFromList(data.toList()));
 result.append(',');
 }
 break;
 default:
 break;
 }
 }
 if(result.endsWith(','))
 result.remove(result.length() - 1,1);
 result.append("]");
 return result;
}

QString JsonObject::getKey(QString& data)
{
 QString key = "";
 int index = data.indexOf(':');
 if(index >= 0)
 {
 key = data.mid(0,index);
 data.remove(0,index);
 if(data.startsWith(':'))
 data.remove(0,1);
 }
 if(key.startsWith('"'))
 key.remove(0,1);
 if(key.endsWith('"'))
 key.remove(key.length() - 1,1);
 return key;
}

QString JsonObject::getValue(QString& data)
{
 QString value = "";
 if(data.startsWith('{'))//object
 {
 int index = data.indexOf('}');
 if(index >= 0)
 {
 value.append(data.mid(0,index+1));
 data.remove(0,index + 1);
 while(value.count('{') > value.count('}'))
 {
 index = data.indexOf('}');
 if(index >= 0)
 {
 value.append(data.mid(0,index + 1));
 data.remove(0,index + 1);
 }
 else
 {
 value = "";
 break;
 }
 }
 if(data.startsWith(','))
 data.remove(0,1);
 }
 }
 else if(data.startsWith('['))//Array
 {
 int index = data.indexOf(']');
 if(index >= 0)
 {
 value.append(data.mid(0,index + 1));
 data.remove(0,index + 1);
 while(value.count('[') > value.count(']'))
 {
 index = data.indexOf(']');
 if(index >= 0)
 {
 value.append(data.mid(0,index + 1));
 data.remove(0,index + 1);
 }
 else
 {
 value = "";
 break;
 }
 }
 if(data.startsWith(','))
 data.remove(0,1);
 }
 }
 else
 {
 int index = data.indexOf(',');
 if(index >= 0)
 {
 value = data.mid(0,index);
 data.remove(0,index);
 if(data.startsWith(','))
 data.remove(0,1);
 }
 else if(!data.contains(','))
 {
 value = data;
 data.clear();
 }
 }
 return value;
}

JsonArray JsonObject::parseArray(QString data)
{
 JsonArray result;
 if(data.startsWith('[') && data.endsWith(']'))
 {
 data.remove(0,1);
 data.remove(data.length() - 1,1);
 while(data.length() > 0)
 {
 QString value = getValue(data);
 if(value.startsWith('{'))//Object
 {
 JsonObject obj(value);
 result.append(QVariant(obj.getRawData()));
 }
 else if(value.startsWith('['))//Array
 {
 JsonArray array = parseArray(value);
 result.append(QVariant(array));
 }
 else if(value.startsWith('"'))//String
 {
 value.remove(0,1);
 if(value.endsWith('"'))
 value.remove(value.length() - 1,1);
 result.append(QVariant(value));
 }
 else if(value==null)
                result.append(QVariant(null));
            else if(value==True)
 result.append(QVariant(True));
 else if(value == False)
 result.append(QVariant(False));
 else//Number
 {
 if(value.contains('.'))//double
 {
 bool ok;
 double doubleValue = value.toDouble(&ok);
 if(ok)
 result.append(QVariant(doubleValue));
 else
 result.append(QVariant(0.0));
 }
 else//int || long
 {
 bool ok;
 int intValue = value.toInt(&ok);
 if(ok)
 result.append(QVariant(intValue));
 else
 {
 qlonglong longValue = value.toLongLong(&ok);
 if(ok)
 result.append(QVariant(longValue));
 else
 result.append(QVariant(0));
 }
 }
 }
 }
 }
 return result;
}

JsonObject::JsonObject(QString jsonData)
{
 if(jsonData.startsWith('{') && jsonData.endsWith('}'))
 {
 jsonData.remove(0,1);
 jsonData.remove(jsonData.length() - 1,1);
 while(jsonData.length() > 0)
 {
 QString key = getKey(jsonData);
 QString value = getValue(jsonData);

 cout<<"jsondata :"<<value.toStdString()<<endl;

 if(value.startsWith('{'))//Object
 this->put(key,JsonObject(value));
 else if(value.startsWith('['))//Array
 {
 JsonArray array = parseArray(value);
 this->put(key,array);
 }
 else if(value.startsWith('"'))//String
 this->put(key,value);
 else if(value==null)
                this->put(key,null);
            else if(value==True)
 this->put(key,True);
 else if(value == False)
 this->put(key,False);
 else//Number
 {
 if(value.contains('.'))//double
 {
 bool ok;
 double doubleValue = value.toDouble(&ok);
 if(ok)
 this->put(key,doubleValue);
 else
 this->put(key,0.0);
 }
 else//int || long
 {
 bool ok;
 int intValue = value.toInt(&ok);
 if(ok)
 this->put(key,intValue);
 else
 {
 qlonglong longValue = value.toLongLong(&ok);
 if(ok)
 this->put(key,longValue);
 else
 this->put(key,0);
 }
 }
 }
 }
 }
}

const QString JsonObject::null = "null";
const QString JsonObject::True = "true";
const QString JsonObject::False = "false";
