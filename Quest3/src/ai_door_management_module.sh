#!/bin/bash
if [ -d "door_configuration" ]; then
    if [ -f "door_configuration/door_map" ]; then
        echo "Success! Door Management Module Started."
    else
        echo "Error: File door_configuration/door_map not found!"
    fi
else
    echo "Error: Directory door_configuration not found!"
fi
