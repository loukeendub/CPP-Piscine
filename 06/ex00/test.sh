#!/bin/sh -ex
mkdir -p result
./scalar_conversion '0' > 'result/0'
./scalar_conversion 'nan' > 'result/nan'
./scalar_conversion '42.0f' > 'result/42.0f'
./scalar_conversion 'inf' > 'result/inf'
./scalar_conversion 'n' > 'result/n'
./scalar_conversion 'nanf' > 'result/nanf'
./scalar_conversion '42' > 'result/42'
./scalar_conversion '42.042' > 'result/42.042'
./scalar_conversion '4.2f' > 'result/4.2f'
diff answer result