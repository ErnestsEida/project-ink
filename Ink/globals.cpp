#include "globals.h"

QString Globals::basePath = "/home/"+qgetenv("USER")+"/Documents/ink/";
QString Globals::recentImagesStoragePath = basePath + "ri_storage.txt";
