#ifndef HAZELCAST_SOCKET
#define HAZELCAST_SOCKET


#include "../Address.h"
#include <netdb.h>
#include <string>

namespace hazelcast {

    typedef unsigned char byte;

    namespace client {
        namespace connection {

            class Socket {
            public:

                Socket(Address& address);

                ~Socket();

                void connect();

                void send(const void *buffer, int len);

                void receive(void *buffer, int len);

                int getSocketId() const;

                void close();

            private:

                Socket(const Socket& rhs);

                void getInfo();

                Address address;
                struct addrinfo *server_info;
                int socketId;


            };

        }
    }
}

#endif /* HAZELCAST_SOCKET */