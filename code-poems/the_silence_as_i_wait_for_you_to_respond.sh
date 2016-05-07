#!/bin/bash

while [ !$(curl -s http://you.com/response) ]; do
    echo " "
done
