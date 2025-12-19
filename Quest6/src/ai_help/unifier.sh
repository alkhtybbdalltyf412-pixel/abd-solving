#!/bin/bash
if ls *.tmp 1> /dev/null 2>&1 || ls *.old 1> /dev/null 2>&1; then
    echo "❌ Error: Still garbage files found!"
else
    echo "✅ Success! Generating main.key..."
    echo "SECRET_KEY_12345" > main.key
fi
