#ifndef DELEGATE_H
#define DELEGATE_H

#include <QItemDelegate>
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QSpinBox>
#include <QPushButton>
class Delegate : public QItemDelegate
{
    Q_OBJECT
public:
    explicit Delegate(QObject *parent = nullptr);

    QWidget *createEditor(QWidget *parent,
                          const QStyleOptionViewItem &option,
                          const QModelIndex &index) const override;
     void setEditorData(QWidget *editor, const QModelIndex &index) const override;
     void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override;
     void updateEditorGeometry(QWidget *editor,
                               const QStyleOptionViewItem &option,
                               const QModelIndex &index) const override;
signals:

public slots:
};

#endif // DELEGATE_H
