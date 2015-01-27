#include "MainWindow.h"
#include <QApplication>
#include <QLabel>

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
{
	setWindowTitle(tr("Qt+VTK Example"));
	setupWidgets();
}

void MainWindow::setupWidgets()
{
	QLabel* label = new QLabel(tr("Hello, World!"));
	label->setAlignment(Qt::AlignCenter);
	setCentralWidget(label);
}
