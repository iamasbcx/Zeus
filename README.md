# Zeus
A high performance, cross-platform Internet Communication Engine. Developed with native socket API. Aim at handling millions of concurrent connections.

## Features
### Cross Platform
- Both client and server can run on Windows, Linux or MacOS.
- Cross-platform communication between client and server.
### Lightweight
- Developed with native socket API and C++ standard libraries, no dependency on any external libraries.
- Along with an one-click compile script to deploy.
### High Performance
- Current concurrency ability: 10K connections, 200 messages per connection.
- Target concurrency ability: 1M concurrent connections.
### Multiple Network Models
- Select
- IOCP (TODO)
- Epoll (TODO)
### Multiple Transfer Protocols
- TCP
- UDP
- FTP (TODO)
- HTTP (TODO)
### Good Maintainability
- Structured message data
- Good OOP encapsulation of network modules

# Examples

There are examples of a TCP client and TCP server under `examples/`. The server is an echo server, which sends back messages

## Build
### Linux & MacOS
CMake 3.0.0 or higher.

g++ 4.7 or higher.
```
git clone https://github.com/navining/Zeus.git
cd Zeus/examples
./build.sh
```

### Windows
Visual Studio 2015 or higher. Open `Zeus.sln` and build with VS.

## Run

Executable files are generated under `bin/`.

Sample script are provided as well, where programmers can custom the parameters.

### Linux & MacOS
`server.sh` and `client.sh` under `server/` and `client/`.

### Windows
`server.bat` and `client.bat` under `server/` and `client/`.
