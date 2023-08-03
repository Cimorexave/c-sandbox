# test:
# 	gcc make_test.c -o make_test && ./make_test "make file said hi"
# testnoarg: 
# 	gcc make_test.c -o make_test && ./make_test 
compile: 
	gcc make_test.c -o make_compile_test
run:
	./make_compile_test "make file said hi"
