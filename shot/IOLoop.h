#pragma once


namespace shot {


class IOLoop {
public:
  IOLoop();
  void start();
private:
  bool running;
};

  
} /* namespace shot */
