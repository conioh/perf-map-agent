# clang perf-map-agent.c perf-map-file.c error.c -I/Library/Java/JavaVirtualMachines/jdk1.8.0_121.jdk/Contents/Home/include -I/Library/Java/JavaVirtualMachines/jdk1.8.0_121.jdk/Contents/Home/include/darwin -v -dynamiclib -o parf-map-agent

clang perf-map-agent.c perf-map-file.c error.c -I${JAVA_HOME}/include -I${JAVA_HOME}/include/darwin -dynamiclib -o parf-map-agent

