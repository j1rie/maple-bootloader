#! /bin/bash
mkdir ./binaries
make clean
make -j3 Platform=MapleMini
cp ./build/maple_boot.bin ./binaries/boot.MapleMini.bin
make clean
make -j3 Platform=Dev
cp ./build/maple_boot.bin ./binaries/boot.Dev.bin
make clean
make -j3 Platform=blueDev
cp ./build/maple_boot.bin ./binaries/boot.blueDev.bin
make clean
make -j3 Platform=blackDev
cp ./build/maple_boot.bin ./binaries/boot.blackDev.bin
make clean
make -j3 Platform=Red
cp ./build/maple_boot.bin ./binaries/boot.Red.bin
make clean
make -j3 Platform=Blue
cp ./build/maple_boot.bin ./binaries/boot.Blue.bin
make clean
rm -d .dep build/stm32_lib build/usb_lib build
