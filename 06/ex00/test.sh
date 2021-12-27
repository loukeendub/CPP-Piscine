#!/bin/sh -ex
mkdir -p result
./convert '0' > 'result/0'
./convert 'nan' > 'result/nan'
./convert '42.0f' > 'result/42.0f'
./convert 'inf' > 'result/inf'
./convert 'n' > 'result/n'
./convert 'nanf' > 'result/nanf'
./convert '42' > 'result/42'
./convert '42.042' > 'result/42.042'
./convert '4.2f' > 'result/4.2f'
diff answer result