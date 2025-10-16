# GCCを使用したVulkanテンプレートプロジェクト（Geany）
他の環境で動くかどうかは未確認です。

### 動作確認済み環境
- EndeavourOS(LXQt)
- gcc (GCC) 15.2.1 20250813


# 前提
以下をインストール

- [Vulkan SDK](https://vulkan.lunarg.com/doc/sdk/latest/linux/getting_started.html)
- outフォルダでstdモジュール作成<br>g++ -std=c++23 -fmodules -fsearch-include-path -c bits/std.cc




# 注意点
- GLFWはモジュール化したため[glfw_window](/glfw_window/)フォルダ以下にあります。
- VulkanのチュートリアルにあるHelloTriangleApplication.cppはモジュール化したため、[vulkan_tutorial.ixx](/libraries/vulkan/vulkan_tutorial.ixx)に移動しました。<br>GLFWのモジュール化に伴い、構成が一部変わっています。
- VulkanはCMakeの使用を推奨しているため、不測の問題が発生する場合が十分にあります
