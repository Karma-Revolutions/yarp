// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

/*
 * Copyright (C) 2006, 2008 Paul Fitzpatrick
 * CopyPolicy: Released under the terms of the GNU GPL v2.0.
 *
 */


#include <yarp/os/Network.h>
using namespace yarp::os;

int main(int argc, char *argv[]) {
    // call the yarp standard companion
    Network yarp;
    return Network::main(argc,argv);
}
