#!/bin/bash

git add .

msg="rebuilding this pac $(date)"

if [ -n "$*" ]; then
    msg = "$*"
fi

git commit -m "$msg"

git push -u origin main
