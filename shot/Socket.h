#pragma once
#include <arpa/inet.h>
/* #include <sys/socket.h> */
#include "ClientSocket.h"


namespace shot {


class Socket {
public:
  Socket();
  void bind();
  void listen();
  void accept(ClientSocket& client);
  void close();
  int getId() const;
private:
  int id;
  sockaddr_in addr;
};


} /* namespace shot */
