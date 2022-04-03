#ifndef HTMLNETWORKING_H
#define HTMLNETWORKING_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QDebug>
#include <QByteArray>

namespace Ui {
class HtmlNetworking;
}

class HtmlNetworking : public QMainWindow
{
    Q_OBJECT

public:
    explicit HtmlNetworking(QWidget *parent = nullptr);
    ~HtmlNetworking();

private:
    Ui::HtmlNetworking *ui;
    QNetworkAccessManager *mrequest;
    void callRequest();
    void callHtml(QNetworkReply *mReply);

};

#endif // HTMLNETWORKING_H
