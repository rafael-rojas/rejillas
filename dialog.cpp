#include "dialog.h"
#include "ui_dialog.h"
#include <QString>

#include "tabla.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    etiAltura = new QLabel("Altura de la rejilla");
    alturaCombo = new QComboBox();
    alturaCombo->addItem("100");
    alturaCombo->addItem("150");
    alturaCombo->addItem("200");
    alturaCombo->addItem("250");
    alturaCombo->addItem("300");
    alturaCombo->addItem("350");
    alturaCombo->addItem("400");
    alturaCombo->addItem("450");
    alturaCombo->addItem("500");
    alturaCombo->addItem("600");
    alturaCombo->setCurrentIndex(1);

    QHBoxLayout *horLayAlt = new QHBoxLayout();
    horLayAlt->addStretch();
    horLayAlt->addWidget(etiAltura);
    horLayAlt->addWidget(alturaCombo);

    QVBoxLayout *verticalLayout = new QVBoxLayout;
    verticalLayout->addLayout(horLayAlt);



    this->setLayout(verticalLayout);

    metrosCub = new QLineEdit("", this);
    resultado = new QLabel("resultado", this);

    QHBoxLayout *horLayMet = new QHBoxLayout();
    horLayAlt->addStretch();
    horLayAlt->addWidget(metrosCub);
    horLayAlt->addWidget(resultado);

    QValidator *validator = new QIntValidator(0, 6000, this);
    metrosCub->setValidator(validator);

    setWindowTitle(tr("Calculadora de Rejillas"));


    connect(metrosCub, SIGNAL(textEdited(const QString &)),
                          this, SLOT(calculaLineEdit(QString)));

    connect(this, SIGNAL(enviaAncho(QString)),
                          resultado, SLOT(setText(QString)));


    this->setLayout(horLayMet);

    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::calculaLineEdit(const QString texto){

    int entero = texto.toInt();

    QString alturaTexto = alturaCombo->currentText();

    int entero2 = alturaTexto.toInt();

    tabla tablaRejillas;
    tablaRejillas.inicializaTabla();

    int anchura = tablaRejillas.encuentraAnchura(entero, entero2);

    QString res;
    res.setNum(anchura);

    QString resultado = res+"x"+alturaTexto;

    emit enviaAncho(resultado);

    //return res;

}



