#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <string>
#include <QMessageBox>

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


// Variables

bool turn = true; // X's turn

int count = 0;

int xWin = 0;
int oWin = 0;
int draw = 0;

char c1, c2, c3, c4, c5, c6, c7, c8, c9;


// Functions

void MainWindow::xWonMsg()
{
    QMessageBox msg;
    msg.setText("X won!");
    msg.exec();

    clearButtons();
    enableButtons();

    xWin++;
    QString s = QString::number(xWin);
    ui->player1_score->setText(s);
}

void MainWindow::oWonMsg()
{
    QMessageBox msg;
    msg.setText("O won!");
    msg.exec();

    clearButtons();
    enableButtons();

    oWin++;
    QString s = QString::number(oWin);
    ui->player2_score->setText(s);
}

void MainWindow::checkDraw()
{
    QMessageBox msg;
    msg.setText("Draw!");
    msg.exec();

    clearButtons();
    enableButtons();

    draw++;
    QString s = QString::number(draw);
    ui->draw_count->setText(s);
}

void MainWindow::clearButtons()
{
    c1 = 0;
    c2 = 0;
    c3 = 0;
    c4 = 0;
    c5 = 0;
    c6 = 0;
    c7 = 0;
    c8 = 0;
    c9 = 0;

    count = 0;

    ui->pushButton_1->setText("");
    ui->pushButton_2->setText("");
    ui->pushButton_3->setText("");
    ui->pushButton_4->setText("");
    ui->pushButton_5->setText("");
    ui->pushButton_6->setText("");
    ui->pushButton_7->setText("");
    ui->pushButton_8->setText("");
    ui->pushButton_9->setText("");
}

void MainWindow::enableButtons()
{
    ui->pushButton_1->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
}

void MainWindow::checkWinner()
{
    // X wining
    if (c1 == 'x' && c2 == 'x' && c3 == 'x')
        xWonMsg();
    else if (c1 == 'x' && c4 == 'x' && c7 == 'x')
        xWonMsg();
    else if (c1 == 'x' && c5 == 'x' && c9 == 'x')
        xWonMsg();
    else if (c1 == 'x' && c4 == 'x' && c7 == 'x')
        xWonMsg();
    else if (c4 == 'x' && c5 == 'x' && c6 == 'x')
        xWonMsg();
    else if (c2 == 'x' && c5 == 'x' && c8 == 'x')
        xWonMsg();
    else if (c7 == 'x' && c8 == 'x' && c9 == 'x')
        xWonMsg();
    else if (c3 == 'x' && c6 == 'x' && c9 == 'x')
        xWonMsg();
    else if (c3 == 'x' && c5 == 'x' && c7 == 'x')
        xWonMsg();

    // O wining
    else if (c1 == 'o' && c2 == 'o' && c3 == 'o')
        oWonMsg();
    else if (c1 == 'o' && c4 == 'o' && c7 == 'o')
        oWonMsg();
    else if (c1 == 'o' && c5 == 'o' && c9 == 'o')
        oWonMsg();
    else if (c1 == 'o' && c4 == 'o' && c7 == 'o')
        oWonMsg();
    else if (c4 == 'o' && c5 == 'o' && c6 == 'o')
        oWonMsg();
    else if (c2 == 'o' && c5 == 'o' && c8 == 'o')
        oWonMsg();
    else if (c7 == 'o' && c8 == 'o' && c9 == 'o')
        oWonMsg();
    else if (c3 == 'o' && c6 == 'o' && c9 == 'o')
        oWonMsg();
    else if (c3 == 'o' && c5 == 'o' && c7 == 'o')
        oWonMsg();

    // Draw
    else
        if (count == 9)
            checkDraw();
}


// Buttons

void MainWindow::on_pushButton_1_clicked()
{
    if (turn)
    {
        ui->pushButton_1->setText("X");
        ui->label->setText("O to play");
        turn = false;
        c1 = 'x';
    }
    else
    {
        ui->pushButton_1->setText("O");
        ui->label->setText("X to play");
        turn = true;
        c1 = 'o';
    }
    ui->pushButton_1->setEnabled(false);
    count++;
    checkWinner();
}


void MainWindow::on_pushButton_2_clicked()
{
    if (turn)
    {
        ui->pushButton_2->setText("X");
        ui->label->setText("O to play");
        turn = false;
        c2 = 'x';
    }
    else
    {
        ui->pushButton_2->setText("O");
        ui->label->setText("X to play");
        turn = true;
        c2 = 'o';
    }
    ui->pushButton_2->setEnabled(false);
    count++;
    checkWinner();
}


void MainWindow::on_pushButton_3_clicked()
{
    if (turn)
    {
        ui->pushButton_3->setText("X");
        ui->label->setText("O to play");
        turn = false;
        c3 = 'x';
    }
    else
    {
        ui->pushButton_3->setText("O");
        ui->label->setText("X to play");
        turn = true;
        c3 = 'o';
    }
    ui->pushButton_3->setEnabled(false);
    count++;
    checkWinner();
}


void MainWindow::on_pushButton_4_clicked()
{
    if (turn)
    {
        ui->pushButton_4->setText("X");
        ui->label->setText("O to play");
        turn = false;
        c4 = 'x';
    }
    else
    {
        ui->pushButton_4->setText("O");
        ui->label->setText("X to play");
        turn = true;
        c4 = 'o';
    }
    ui->pushButton_4->setEnabled(false);
    count++;
    checkWinner();
}


void MainWindow::on_pushButton_5_clicked()
{
    if (turn)
    {
        ui->pushButton_5->setText("X");
        ui->label->setText("O to play");
        turn = false;
        c5 = 'x';
    }
    else
    {
        ui->pushButton_5->setText("O");
        ui->label->setText("X to play");
        turn = true;
        c5 = 'o';
    }
    ui->pushButton_5->setEnabled(false);
    count++;
    checkWinner();
}


void MainWindow::on_pushButton_6_clicked()
{
    if (turn)
    {
        ui->pushButton_6->setText("X");
        ui->label->setText("O to play");
        turn = false;
        c6 = 'x';
    }
    else
    {
        ui->pushButton_6->setText("O");
        ui->label->setText("X to play");
        turn = true;
        c6 = 'o';
    }
    ui->pushButton_6->setEnabled(false);
    count++;
    checkWinner();
}


void MainWindow::on_pushButton_7_clicked()
{
    if (turn)
    {
        ui->pushButton_7->setText("X");
        ui->label->setText("O to play");
        turn = false;
        c7 = 'x';
    }
    else
    {
        ui->pushButton_7->setText("O");
        ui->label->setText("X to play");
        turn = true;
        c7 = 'o';
    }
    ui->pushButton_7->setEnabled(false);
    count++;
    checkWinner();
}


void MainWindow::on_pushButton_8_clicked()
{
    if (turn)
    {
        ui->pushButton_8->setText("X");
        ui->label->setText("O to play");
        turn = false;
        c8 = 'x';
    }
    else
    {
        ui->pushButton_8->setText("O");
        ui->label->setText("X to play");
        turn = true;
        c8 = 'o';
    }
    ui->pushButton_8->setEnabled(false);
    count++;
    checkWinner();
}


void MainWindow::on_pushButton_9_clicked()
{
    if (turn)
    {
        ui->pushButton_9->setText("X");
        ui->label->setText("O to play");
        turn = false;
        c9 = 'x';
    }
    else
    {
        ui->pushButton_9->setText("O");
        ui->label->setText("X to play");
        turn = true;
        c9 = 'o';
    }
    ui->pushButton_9->setEnabled(false);
    count++;
    checkWinner();
}


// Menu

void MainWindow::on_actionNew_Game_triggered()
{
    xWin = 0;
    oWin = 0;
    draw = 0;

    QString x = QString::number(xWin);
    QString o = QString::number(oWin);
    QString d = QString::number(draw);

    ui->player1_score->setText(x);
    ui->player2_score->setText(o);
    ui->draw_count->setText(d);

    clearButtons();

    turn = true;
    ui->label->setText("X to play");
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox msg;
    msg.setText("Tic-Tac-Toe by Ali Rabiei\nVersion 1.0");
    msg.exec();
}


// End
