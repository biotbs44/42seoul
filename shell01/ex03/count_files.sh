#!/bin/bash

ls -al | grep ^[-d] | wc -l | tr -d ' ' | tr -d '\12'
