# web-service-dg-cpp
Dependency graph mock up for web service


## install bazel

```shell
sudo apt install apt-transport-https curl gnupg -y
curl -fsSL https://bazel.build/bazel-release.pub.gpg | gpg --dearmor >bazel-archive-keyring.gpg
sudo mv bazel-archive-keyring.gpg /usr/share/keyrings
echo "deb [arch=amd64 signed-by=/usr/share/keyrings/bazel-archive-keyring.gpg] https://storage.googleapis.com/bazel-apt stable jdk1.8" | sudo tee /etc/apt/sources.list.d/bazel.list

sudo apt update && sudo apt install bazel

sudo apt update && sudo apt full-upgrade

bazel --version
```

## vulkan
```shell
touch WORKSPACE

mkdir -p third_party

mkdir -p third_party/glm

# how to build the glm library
# cc_library
# glob
touch third_party/glm/glm.BUILD

# alias
touch third_party/glm/BUILD

# for glfw
mkdir -p third_party/glfw
touch third_party/glfw/glfw.BUILD
touch third_party/glfw/BUILD

# for app1 (vulkan)
mkdir -p app1
touch app1/main.cpp app1/BUILD

# run 
bazel run //app1
bazel query "//app1:*"
bazel query --notool_deps --noimplicit_deps "deps(//app1:main.cpp)" --output graph
```

## ioc for web server
```shell
# for boost di
mkdir -p third_party/boost-di
touch third_party/boost-di/boost-di.BUILD
touch third_party/boost-di/BUILD

# for spdlog
mkdir -p third_party/spdlog
touch third_party/spdlog/spdlog.BUILD
touch third_party/spdlog/BUILD

mkdir -p ioc
touch ioc/main.cpp ioc/BUILD

bazel build //ioc
bazel run //ioc
```

## web client
```shell
# workspace config 

sudo apt-get install libcurl4-openssl-dev

mkdir -p web-client
touch web-client/main.cpp web-client/BUILD

bazel build //web-client
bazel run //web-client
cd bazel-bin
./home/xcheng4/web-service-dg-cpp/bazel-bin/web-client
```