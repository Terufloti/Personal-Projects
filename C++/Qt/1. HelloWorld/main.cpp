#include <QApplication>
#include <QLabel>

int main(int argc, char* argv[]){
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Hello World!");
    label->setWindowTitle("Hello World Program!");
    label->resize(800, 400);
    label->show();
    return app.exec();
}
