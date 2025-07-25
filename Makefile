build:
	cmake -S . -B build -G Ninja
	cmake --build build

run:
	./build/app

rebuild: clean build

clean:
	rm -rf build
