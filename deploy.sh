#!/bin/bash

git add .

msg="rebuilding this pac $(date)"

if [ -n "$*" ]; then
    msg = "$*"
fi

git commit -m "$msg"

git config --global --unset http.proxy
git config --global --unset https.proxy
git push
