#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ui.listWidget->setViewMode(QListWidget::IconMode);
	ui.listWidget->setIconSize(QSize(100, 100));

	ui.listWidget->addItem(new QListWidgetItem(QIcon("D:\\Code\\QtImageList\\QtImageList\\fpa_flag.png"), "Free Planet Alliance"));
	ui.listWidget->addItem(new QListWidgetItem(QIcon("D:\\Code\\QtImageList\\QtImageList\\ge_flag.png"), "Galactic Empire"));
	ui.listWidget->addItem(new QListWidgetItem(QIcon("D:\\Code\\QtImageList\\QtImageList\\phezzan_flag.png"), "Phezzan"));
	ui.listWidget->addItem(new QListWidgetItem(QIcon("D:\\Code\\QtImageList\\QtImageList\\fpa_flag.png"), "Free Planet Alliance"));
	ui.listWidget->addItem(new QListWidgetItem(QIcon("D:\\Code\\QtImageList\\QtImageList\\ge_flag.png"), "Galactic Empire"));
	ui.listWidget->addItem(new QListWidgetItem(QIcon("D:\\Code\\QtImageList\\QtImageList\\phezzan_flag.png"), "Phezzan"));

	ui.listWidget->setWrapping(true);
	ui.listWidget->setFlow(QListWidget::TopToBottom);
	ui.listWidget->setResizeMode(QListWidget::Adjust);
	ui.listWidget->setDragDropMode(QListWidget::NoDragDrop);
}

MainWindow::~MainWindow()
{

}
