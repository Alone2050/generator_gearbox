#ifndef GENERATOR_H
#define GENERATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class generator; }
QT_END_NAMESPACE

class generator : public QMainWindow
{
    Q_OBJECT

public:
    generator(QWidget *parent = nullptr);
    ~generator();

private:
    Ui::generator *ui;
};
#endif // GENERATOR_H
