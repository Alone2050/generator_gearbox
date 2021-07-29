#include "generator.h"
#include "ui_generator.h"

generator::generator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::generator)
{
    ui->setupUi(this);
}

generator::~generator()
{
    delete ui;
}

