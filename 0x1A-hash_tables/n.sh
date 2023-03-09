#!/bin/bash

for i in *.c *.h *.md; do
	echo "$i"
	chmod +x $i
	git add $i
	git commit -m "$i"
	git push
done

