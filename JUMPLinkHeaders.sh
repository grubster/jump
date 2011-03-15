#!/bin/bash
#
# Automatically Link Header Files
#

echo "Creating Main Headers Directory..."
mkdir Headers

echo "Acessing Main Headers Directory..."
cd Headers

echo "Linking JUMPCore Headers..."
ln -s ../JUMPCore/Headers/* .

echo "Linking JUMPData Headers..."
ln -s ../JUMPData/Headers/* .

echo "Linking JUMPDatabase Headers..."
ln -s ../JUMPDatabase/Headers/* .

echo "Linking JUMPNetwork Headers..."
ln -s ../JUMPNetwork/Headers/* .

echo "Linking JUMPUserInterface Headers..."
ln -s ../JUMPUserInterface/Headers/* .

echo "Linking JUMPLogger Headers..."
ln -s ../JUMPLogger/Headers/* .
ln -s ../JUMPLogger/Libraries/Log4CocoaTouch/Headers/* .
