#include "../include/ListenSocket.h"
#include <memory>
#include <sys/socket.h>

ListenSocket::ListenSocket(ISocket &socket)
    : socketFileDescriptor(socket.getFileDescriptor()) {}

void ListenSocket::listenSocket() { listen(socketFileDescriptor, SOMAXCONN); }