#include <QColorSpace>
#include <QCoreApplication>
#include <QCryptographicHash>
#include <QDateTime>
#include <QDebug>
#include <QDir>
#include <QElapsedTimer>
#include <QImage>

#define imageCachePath "images/"
#define monoImagesCachePath "monoImages/"
#define mirroredImagesCachePath "mirroredImages/"
#define alphaImagesCachePath "alphaImages/"

/// QList</** NOTE: Something went wrong here and u have to find solution to fix this. */> imageStore;

int main(int argc, char* argv[])
{
    QCoreApplication a(argc, argv);

    QDir dir;
    dir.mkdir(monoImagesCachePath);
    dir.mkdir(mirroredImagesCachePath);
    dir.mkdir(alphaImagesCachePath);

    /* Create watch, that will count much operation took */
    QElapsedTimer timer;
    timer.start();

    /** NOTE: Here u have to find all images in folder */

    /** TODO: Sort them by date */

    //    for (int i = 0; i < /** image count here */; ++i) {
    //        QImage image(/** image file name */);

    //        image.convertTo(QImage::Format_RGBX64, Qt::ColorOnly);
    //        image = image.mirrored(true, false);
    //        image.save(mirroredImagesCachePath + QCryptographicHash::hash(/** image file name */, QCryptographicHash::Md5).toHex(), "PPM");

    //        image.convertToFormat(QImage::Format_RGB666).save(alphaImagesCachePath + QCryptographicHash::hash(/** image file name */, QCryptographicHash::Md5).toHex(), "PPM");

    //        image.convertTo(QImage::Format_Mono, Qt::MonoOnly);
    //        image.save(monoImagesCachePath + QCryptographicHash::hash(/** image file name */, QCryptographicHash::Md5).toHex(), "PPM");
    //    }

    /* See how much operation took */
    qInfo() << "Operation ended with:" << timer.elapsed() << "ms";

    return a.exec();
}
