// check libzmq version

#include <stdio.h>
#include "zmq.h"

int main(int argc, char **argv){
    int major, minor, patch;

    major = ZMQ_VERSION_MAJOR;
    minor = ZMQ_VERSION_MINOR;
    patch = ZMQ_VERSION_PATCH;

    fprintf(stdout, "vers: %d.%d.%d\n", major, minor, patch);
    return 0;
}
