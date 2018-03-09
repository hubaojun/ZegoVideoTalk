#include "ZegoMainDialog.h"
#include <QtWidgets/QApplication>
#include <QTranslator>
#include <QDir>
#include <QLocale>
#include <QDebug>

QString LoadTranslateFile()
{
	//增加多语言支持  
	QLocale locale;
	QString languagePath = QDir::currentPath();

	if (locale.language() == QLocale::Chinese)
    {
		languagePath += "/videotalt_zn.qm";
	}
	else
	{
		languagePath += "/videotalk_en.qm";
	}

	return languagePath;
}

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	app.setWindowIcon(QIcon("VideoTalk.ico"));
	QTranslator *trans = new QTranslator;
	trans->load(LoadTranslateFile());

	app.installTranslator(trans);
	ZegoMainDialog w;
	w.initDialog();
	w.show();
	return app.exec();
}
