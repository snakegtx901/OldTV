#ifndef OLDTV_H
#define OLDTV_H

#include <QMainWindow>

namespace Ui {
class oldtv;
}

class oldtv : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit oldtv(QWidget *parent = 0);
    ~oldtv();
    
private:
    Ui::oldtv *ui;
};

#endif // OLDTV_H
