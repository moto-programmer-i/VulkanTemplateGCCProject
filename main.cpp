import std;
import Glfw;
import VulkanTutorial;

constexpr std::uint32_t WIDTH = 800;
constexpr std::uint32_t HEIGHT = 600;

int main() {
	// ウィンドウの作成
    Glfw::Window window{
        {
            .width = WIDTH,
            .height = HEIGHT,
            .name = "vulkan"
        }
    };
    
    // Vulkanのチュートリアルへ
    HelloTriangleApplication tutorial{ window };
    tutorial.run();

    // ウィンドウ待機
    window.waitUntilClose();
	
	return 0;
}
