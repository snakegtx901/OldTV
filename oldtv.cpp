#include "oldtv.h"
#include "ui_oldtv.h"

oldtv::oldtv(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::oldtv)
{
    ui->setupUi(this);
}

oldtv::~oldtv()
{
    delete ui;
}
