[gabime/spdlog#2114](https://github.com/gabime/spdlog/issues/2114)

## Requirements

* CMake
* Docker (optional)

## Build

```bash
$ git clone --recursive https://github.com/tt4g/spdlog-issue-2114.git
$ cd ${PROJECT_DIR}
$ mkdir build
$ cd build
$ cmake -G "${YOUR_GENERATOR}" ..
$ cmake --build . --target all
$ ./spdlog_issue_2114

# Lists the log files.
$ ls -lha /home/test/logs/
```
