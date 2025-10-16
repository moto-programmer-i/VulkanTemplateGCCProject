# GCCを使用したVulkanテンプレートプロジェクト（Geany）
他の環境で動くかどうかは未確認です。

### 動作確認済み環境
- EndeavourOS(LXQt)
- gcc (GCC) 15.2.1 20250813


# 前提
以下をインストール

- [Vulkan SDK](https://vulkan.lunarg.com/doc/sdk/latest/linux/getting_started.html)



# 初期設定
以下を実行
1. [init.sh](/init.sh)
1. [build-glfw.sh](/libraries/glfw/build-glfw.sh)
1. [build-vulkan.sh](/libraries/vulkan/build-vulkan.sh)
1. [build.sh](/build.sh)


# 実行
[run.sh](/run.sh) を実行

# 開発の進め方の想定
モジュールごとに動的ライブラリにわけているので、


1. ソースを変更
1. 対応するビルド用シェルスクリプトを実行<br>（.soを更新）
1. [run.sh](/run.sh) を実行


で開発を進めることを想定。



# 注意点
- GLFWはモジュール化したため[glfw](/libraries/glfw/)フォルダ以下にあります。
- VulkanのチュートリアルにあるHelloTriangleApplication.cppはモジュール化したため、[vulkan_tutorial.ixx](/libraries/vulkan/vulkan_tutorial.ixx)に移動しました。<br>GLFWのモジュール化に伴い、構成が一部変わっています。
- VulkanはCMakeの使用を推奨しているため、不測の問題が発生する場合が十分にあります
