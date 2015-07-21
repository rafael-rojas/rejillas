#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>
#include <QComboBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QString>

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();


public slots:
    void calculaLineEdit(const QString );

signals:
    QString enviaAncho(QString);

private:

    QLabel *etiAltura;
    QComboBox *alturaCombo;
    QHBoxLayout * horLayAlt;
    QHBoxLayout * horLayMet;
    QVBoxLayout *verticalLayout;
    int ancho;

    QLineEdit *metrosCub;
    QLabel *resultado;

    Ui::Dialog *ui;
};

#endif // DIALOG_H
