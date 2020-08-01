FILE = main.c
SRC = /workspaces/c/src/${FILE}
DEST = /workspaces/c/out/a.out
all: check compile run
check:
	@ \
	cppcheck --enable=all --quiet --suppress=missingIncludeSystem ${SRC}
compile:
	@ \
	gcc -W -Wall -Wextra -Werror -o ${DEST} ${SRC}
run:
	@ \
	${DEST}
rm:
	@ \
	rm ${DEST}