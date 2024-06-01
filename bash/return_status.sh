#!/usr/bin/env bash

function my_func() {
	return 10

}
my_func
if [[ $? == 10 ]]; then
	echo "hi"
else
	echo "bye"

fi

# Output:
# 10
