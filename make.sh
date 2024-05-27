#!/bin/bash
if [ ! -d "build" ]; then
    mkdir "build"
fi

cd build
cmake .. -G Ninja
ninja -v