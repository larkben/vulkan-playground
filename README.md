## Playing with Vulkan API C++

### Install Options

<p> 1: Linux </p>

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

probably best to use the `purple` vscode.. following these instructions https://vulkan-tutorial.com/Development_environment#page_Windows

