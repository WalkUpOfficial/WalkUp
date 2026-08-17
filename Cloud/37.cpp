#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    
    QWidget window;
    window.setWindowTitle("我的C++窗口");
    window.resize(400, 300);
    
    QPushButton button("点击我", &window);
    button.move(150, 120);
    QObject::connect(&button, &QPushButton::clicked, []() {
        qDebug() << "按钮被点击了！";
    });
    
    window.show();
    return app.exec();
}
