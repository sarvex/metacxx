all:
	g++ main.cpp -o metacxx

install:
	cp metacxx /usr/bin/metacxx

uninstall:
	rm /usr/bin/metacxx -f
