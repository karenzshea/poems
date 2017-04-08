#!/bin/bash

while [ !$(curl -s --connect-timeout 3 https://you.com/response) ]; do
    echo " "
done
