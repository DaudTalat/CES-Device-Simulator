#include "Records.h"


Records::Records()
{}

void Records::addSession(Session* s)
{
    QFile file("tmp.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        qInfo() << "Write Failed.";
    }

    QTextStream stream(&file);

    stream << "Session Length: " << s->getLength() << ", Session Intensity: " << s->getIntensity() << ", Session Type: " << s->getType() <<"\n";

    file.close();
}
