#!/usr/bin/env bash

echo "Enter the extension to be encrypted"
read extension
for i in *$extension; do
	gpg -e "$i"
	rm -rf "$i"
done
