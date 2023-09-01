#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{
    exit(0);
}

void MainWindow::on_convertBtn_clicked()
{
    QString inputNumber = ui->inputResult->text();
    QString binaryResult;

    for (int i = 0; i < inputNumber.length(); i++)
    {
        QChar currentChar = inputNumber[i].toUpper(); // Convert to uppercase
        QString binaryValue;

        switch(currentChar.toLatin1())
        {
        case '0': binaryValue = "0000"; break;
        case '1': binaryValue = "0001"; break;
        case '2': binaryValue = "0010"; break;
        case '3': binaryValue = "0011"; break;
        case '4': binaryValue = "0100"; break;
        case '5': binaryValue = "0101"; break;
        case '6': binaryValue = "0110"; break;
        case '7': binaryValue = "0111"; break;
        case '8': binaryValue = "1000"; break;
        case '9': binaryValue = "1001"; break;
        case 'A': binaryValue = "1010"; break;
        case 'B': binaryValue = "1011"; break;
        case 'C': binaryValue = "1100"; break;
        case 'D': binaryValue = "1101"; break;
        case 'E': binaryValue = "1110"; break;
        case 'F': binaryValue = "1111"; break;
        default: binaryValue = "Enter 1-9 or ABCEDF only!"; break;
        }


        binaryResult += binaryValue;
    }

    ui->outputResult->setText(binaryResult);
}

void MainWindow::on_pushButton_2_clicked()
{
    this->ui->inputResult->clear();
    this->ui->outputResult->clear();



}

