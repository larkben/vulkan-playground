## Playing with Vulkan API C++

### Install Options

<p> 1: Linux / Mac? </p>

Sounds like maybe `vulkan-headers` is depricated and `libvulkan-dev` is to be used now.


```bash
sudo apt update
sudo apt install libvulkan-dev vulkan-headers vulkan-tools glslang-tools
sudo apt install build-essential cmake libglm-dev libglfw3-dev
mkdir build
cd build
cmake ..
make
./VulkanTest
```

<p> 2: Windows </p>

https://vulkan-tutorial.com/Development_environment#page_Windows

<p> 3: MacOSX </p>

https://vulkan-tutorial.com/Development_environment#page_MacOS

### Tasks

- [] draw triangle