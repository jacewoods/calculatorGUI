#include <QApplication>
#include "CalcGUI.h"


int main(int argc, char* argv[])
{
 QApplication app(argc, argv);

 CalcGUI dlg;

 dlg.show();

 return app.exec();

 return 0;
}
