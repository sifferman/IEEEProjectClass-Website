
# verify S22-FPGA/Lecture/Verilog/verilog_template.zip
ZIP=S22-FPGA/Lecture/Verilog/verilog_template.zip
REF=S22-FPGA/Lecture/Verilog/verilog_template
NEW=verilog_template
unzip ${ZIP} > /dev/null
diff --brief -r ${REF} ${NEW}
ZIP_RETURN=$?
rm -rf ${NEW}

exit ${ZIP_RETURN}
