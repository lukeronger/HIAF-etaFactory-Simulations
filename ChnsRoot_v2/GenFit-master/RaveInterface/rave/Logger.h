#ifndef rave_RaveLogger_H
#define rave_RaveLogger_H

#include <string>
#include <iostream>
#include "vcconfig.h"  //Yutie 2022.02.06

namespace rave {
class RaveDllExport Logger {
public:
  static void writeToConsole();
  static void writeToFile ( const std::string & filename );
  static void writeToStream ( std::ostream & stream, bool delete_after_usage );
  enum Level { Error=0, Warning=1, Info=2, Debug=3, ImportantInfo=4 };
  static void setLogLevel ( Level );
};
}

#endif // rave_RaveLogger_H
