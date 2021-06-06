
# Build the base system
base-system:
	gcc src/iecdev.cpp -shared -fPIC -o objects/beef_compiler.a