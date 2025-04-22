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

Best to use the `purple` vscode here. You can interact with C++ better I think, also must install Vulkan SDK.

<p> 3: MacOSX </p>

https://vulkan-tutorial.com/Development_environment#page_MacOS

After attempting Vulkan with Mac, the difference in code across systems might not be worth it. Mac itself does
not have support for Vulkan natively and instead abstracts through the Metal API which often leads to having to do
lots of workarounds to accomplish everyday tasks with Vulkan compared to say Windows and or Linux.

### Tasks

- [ ] draw triangle