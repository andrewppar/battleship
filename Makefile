.PHONY: build
.DEFAULT_GOAL := run

build:
	cmake . -Bbuild
	$(MAKE) -C build

run: 
	./build/battleship_game

clean: 
	rm -rf build/*
