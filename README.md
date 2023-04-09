# Welcome to App Runner
App Runner allows you to launch Apps easily.

Application Runner is a software created to launch any application or shell script without prefixing the "./" signs.

You can use "run <app name>" command to start any application.
## Installation
Download [Latest](https://github.com/korayustundag/apprunner/releases) version

x64:
```bash
sudo dpkg -i run_1.0_amd64.deb
```
x86:
```bash
sudo dpkg -i run_1.0_i386.deb
```
## Usage
```bash
run <any app>
```
## Examples
```bash
run /home/user/myapp
```
```bash
run firefox.AppImage
```
```bash
run install.sh
```
```bash
run "any app"
```
```bash
run myapp --help
```
## Attention
**App Runner cannot run system apps.**

~~run gedit file.txt~~

~~run apt-get update~~
## Building from Source
1. Install GCC and G++
```bash
sudo apt-get install gcc g++
```
2. Install Make
```bash
sudo apt-get install make
```
3. Install Git
```bash
sudo apt-get install git
```
Clone Repo:
```bash
git clone https://github.com/korayustundag/apprunner.git
```
Go to repo dir:
```bash
cd apprunner
```
Build:
```bash
make build
```
Build x86:
```bash
make x86
```
Build amd64:
```bash
make amd64
```
