#include "AppConfig.hpp"

class CmdLineInterface
{
public:
  CmdLineInterface(int argc, cahr *argv[])
  AppConfig getConfig();
private:
  AppConfig config;
}
