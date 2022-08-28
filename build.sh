#!/usr/bin/env bash

mkdir build
cd build
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ..
make -j2

cp compile_commands.json ..