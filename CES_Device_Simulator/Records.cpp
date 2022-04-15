#include "Records.h"


Records::Records()
{}

void Records::addSession(Session* s)
{
    QFile file("TherapySessions.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        qInfo() << "Write Failed.";
    }

    QTextStream stream(&file);

    if (s->getType() == 0)
    {
        stream << "Session Length: " << s->getLength() << " minutes, Session Intensity: " << s->getIntensity() << ", Session Type: MET" <<"\n";
    }

    else if (s->getType() == 1)
    {
        stream << "Session Length: " << s->getLength() << " minutes, Session Intensity: " << s->getIntensity() << ", Session Type: DELTA" <<"\n";
    }

    else if (s->getType() == 2)
    {
        stream << "Session Length: " << s->getLength() << " minutes, Session Intensity: " << s->getIntensity() << ", Session Type: THETA" <<"\n";
    }

    else if (s->getType() == 3)
    {
        stream << "Session Length: " << s->getLength() << " minutes, Session Intensity: " << s->getIntensity() << ", Session Type: THETA" <<"\n";
    }

    file.close();
}

void Records::setRecordActive(bool value) {
    recordActive = value;
}

bool Records::getRecordActive() {
    return recordActive;
}
