#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_pushButton_clicked()
{
    ui->label_3->setText(
        "процесор: AMD Ryzen 5 5600 3.5-4.4 GHz;\n "
        "модуль пам'яті: 16GB (8GBx2) DDR4 3200 MHz;\n "
        "SSD-накопичувач: SSD M.2500GB / Kioxia Exceria;\n "
        "блок живлення: 650W / Chieftec GPS-650A8;\n "
        "відеокарта: GeForce RTX 4060 Ti, 8GB;\n "
        "материнська плата: Asus TUF Gaming B450M-Plus II;\n "
        "куллер: ID-Cooling SE-224-XTS;\n "
        "корпус: 1stPlayer X6-3G6P-1G6;\n "
        "ціна 30000 гривень;");

}


void MainWindow::on_pushButton_2_clicked()
{
    ui->label_3->setText(
        "процесор: Athlon™ X4 970;\n "
        "модуль пам'яті: 8Gb DDR4 2666mhz Team;\n "
        "SSD-накопичувач: 2,5 480Gb Kingston;\n "
        "блок живлення: 500W Gamemax;\n "
        "відеокарта: Radeon RX 550 4Gb;\n "
        "материнська плата: AM4 A320M;\n "
        "куллер: AMD BOX;\n "
        "корпус: Frontier Karo 22;\n "
        "ціна: 13000 гривень;");

}

