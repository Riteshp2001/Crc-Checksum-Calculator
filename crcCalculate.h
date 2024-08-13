#ifndef CRCCALCULATE_H
#define CRCCALCULATE_H

#include <QWidget>
#include <Debugger.h>
#include <QFile>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class crcCalculate; }
QT_END_NAMESPACE

class crcCalculate : public QWidget
{
    Q_OBJECT

public:
    crcCalculate(QWidget *parent = nullptr);
    ~crcCalculate();
    void CalculateChecksum(char *checksum,QString filePath);
    unsigned short computeCrc(unsigned char *message, int blk_len);

private slots:
    void on_crcButton_clicked();

private:
    Ui::crcCalculate *ui;
};
#endif // CRCCALCULATE_H
