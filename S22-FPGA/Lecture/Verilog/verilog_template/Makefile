# ======================================================= #

PROJECT = ucsbieee::adder_example

# VVP Dump
DUMP	= build/ucsbieee__adder_example_1.0.0/sim-icarus/dump.fst

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
	fusesoc library add adder . --sync-type=local

${DUMP}: $(shell find sim -type f) fusesoc.conf $(shell find rtl -type f) adder.core
	fusesoc run --target sim ${PROJECT}

# ======================================================= #
