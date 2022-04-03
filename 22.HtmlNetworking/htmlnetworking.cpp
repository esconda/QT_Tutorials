#include "htmlnetworking.h"
#include "ui_htmlnetworking.h"

HtmlNetworking::HtmlNetworking(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HtmlNetworking),
    mrequest(nullptr)
{
    ui->setupUi(this);
    mrequest = new QNetworkAccessManager;
    connect(mrequest,&QNetworkAccessManager::finished,this,&HtmlNetworking::callHtml);
    callRequest();
}

HtmlNetworking::~HtmlNetworking()
{
    delete ui;
}

void HtmlNetworking::callRequest()
{
    QString twebsideName;
    twebsideName = "http://google.com.tr";
    mrequest->get(QNetworkRequest(QUrl(twebsideName)));
}

void HtmlNetworking::callHtml(QNetworkReply *mReply)
{
    QByteArray tReply;
    tReply = mReply->readAll();

    if(!tReply.isEmpty()){
        qDebug()<<tReply;
    }

}


