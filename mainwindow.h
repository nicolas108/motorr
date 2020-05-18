#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_valores_clicked();

    void on_val_velocidad_copyAvailable(bool b);

    void on_val_frecuencia_copyAvailable(bool b);

    void on_val_voltaje_copyAvailable(bool b);

    void on_val_temperatura_2_copyAvailable(bool b);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
