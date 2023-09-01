# UnitTestBotCCpp Tutorial and Testing

## Guia Rápido 
- [What is](#WhatIs)
- [A Tool Ready To Use](#AToolReadyToUse)
- [Testing the test](#TestingTheTest)
- [Target](#Target)
- [Features](#Features)
- [Worth it?](#Worthit?)
- [Where It Came From?](#WhereItCameFrom?)


## What is
UnitTestBot (aka UTBot) tool provides engineers with a simple 1-mouse-click way to automatically generate unit tests and visualize coverage for projects written in C and C++ Programming Languages. It is an IDE extension (the client) paired with server application. The tool uses symbolic execution for test cases generation. UTBot uses KLEE Symbolic Virtual Machine enchanced with a new advanced bidirectional symbolic execution algorithm developed by Research Group from Saint Petersburg State University. Tests are generated in form of Google Test Framework.

## A Tool Ready To Use
You can try drectly online here:
https://www.utbot.org/demo

Or 

Use the tool in your VS Code following the guide : https://github.com/UnitTestBot/UTBotCpp/wiki/Intro

## Testing the test

To test the capabilities and limitations of the tool, two RPM increment codes were developed, aiming to simulate this task in an automotive ECU. The first code is called rpm_simple is based on a simple value increment.The second includes additional elements such as correction and error factors, And it is called as rpm_max. 

Both codes were subjected to the automatic test case generation tool, and their codes can be seen in this directory as test_rpm_max and test_rpm_simple.









## Target

## Features


## Worth it?

## Where It Came From?
