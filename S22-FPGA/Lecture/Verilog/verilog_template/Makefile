# ======================================================= #

FILE	= adder.core
VENDOR	= ucsbieee
LIBRARY	=
CORE	= adder
VERSION	= 1.0.0
PROJECT = ${VENDOR}:${LIBRARY}:${CORE}:${VERSION}

# VVP Dump
DUMP	= build/${VENDOR}_${LIBRARY}_${CORE}_${VERSION}/sim-icarus/dump.fst

# ======================================================= #
# API

.PHONY: sim view init clean

# ======================================================= #
# Sim targets

sim: fusesoc.conf
	fusesoc run --target sim ${PROJECT}

view: fusesoc.conf ${DUMP}
	gtkwave ${DUMP} > /dev/null 2>&1 &

# ======================================================= #
# Misc targets

init: fusesoc.conf

clean:
	rm -rf build fusesoc.conf

# ======================================================= #
# Files

fusesoc.conf:
	fusesoc library add ${VENDOR}_${LIBRARY}_${CORE}_${VERSION} . --sync-type=local

${DUMP}: $(shell find sim -type f) fusesoc.conf $(shell find rtl -type f) ${FILE}
	fusesoc run --target sim ${PROJECT}

# ======================================================= #
