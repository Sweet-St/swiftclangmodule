swift package init --type executable


## Ubuntu
install gcc 13:
```sh
sudo add-apt-repository ppa:ubuntu-toolchain-r/test
sudo apt update
sudo apt install gcc-13 g++-13
```

swift build -Xcc -I/home/conti/testcode/swiftclangmodule/Sources/Cxxlib/cxxsource/include


## Windows
swift 5.9.2

swift build -Xcc -ISources\Cxxlib\cxxsource\include